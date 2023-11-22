#!/bin/bash

# Set your timeout duration in seconds
timeout_duration=15
# Set the keyboard backlight off intensity (you might need to adjust this)
backlight_off_intensity=0
# Set the keyboard backlight on intensity
backlight_on_intensity=1

# Identify your keyboard output device
keyboard_device=$(xinput | grep -i "keyboard" | grep -oP 'id=\K\d+')

while true; do
    # Get screensaver status and idle time in seconds
    xssstate_output=$(xssstate 2>/dev/null)
    screensaver_status=$(echo "$xssstate_output" | awk '{print $1}')
    idle_time=$(echo "$xssstate_output" | awk '{print $2}')

    # If xssstate reports an error or the status is not supported, set idle_time to a high value
    if [ "$screensaver_status" == "unknown" ] || [ "$screensaver_status" == "unsupported" ]; then
        idle_time=$((timeout_duration + 1))
    fi

    # Check if idle_time is a number
    if ! [[ "$idle_time" =~ ^[0-9]+$ ]]; then
        idle_time=$((timeout_duration + 1))
    fi

    if [ "$idle_time" -ge "$timeout_duration" ]; then
        # If idle time exceeds the timeout, turn off the keyboard backlight
        xrandr --output "$keyboard_device" --brightness $backlight_off_intensity
    else
        # If activity is detected, turn on the keyboard backlight
        xrandr --output "$keyboard_device" --brightness $backlight_on_intensity
    fi

    # Adjust the sleep duration based on your needs
    sleep 1
done

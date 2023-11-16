import os
import time
import sys
import string
def clean_password(password):
    # Remove extra characters from the password
    return ''.join(char for char in password if char.isalnum() or char in string.punctuation)

def brute_force_password(target_password, password_file):
    start_time = time.time()

    print(f"Brute-forcing the password {target_password}:")

    with open(password_file, 'r') as file:
        current_line_number = 0
        for line_number, line in enumerate(file, start=1):
            file_password = clean_password(line.strip())
            sys.stdout.write("\033[2K\rTrying password: {}".format(file_password))
            sys.stdout.flush()

            print(f"\n(Line {line_number})", end='', flush=True)
            time.sleep(0.000000001)

            if file_password == target_password:
                end_time = time.time()
                elapsed_time = end_time - start_time

                print(f"\nPassword found: {file_password}")
                print(f"Time taken: {elapsed_time:.6f} seconds\n")
                return

            current_line_number = line_number

    print(f"\nPassword not found. Reached end of file (Line {current_line_number}).")

if __name__ == "__main__":
    password_file_path = os.path.expanduser("~/Workstation/Python/else/passwords.txt")

    try:
        target_password = input("Enter the password to brute force: ")
        brute_force_password(target_password, password_file_path)

    except FileNotFoundError:
        print(f"Error: File not found at {password_file_path}")
    except Exception as e:
        print(f"An error occurred: {e}")
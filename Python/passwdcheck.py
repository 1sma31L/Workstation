import os

def find_password_line(target_password, password_file):
    with open(password_file, 'r') as file:
        for line_number, line in enumerate(file, start=1):
            password = line.strip()
            if password == target_password:
                return line_number

    return None

if __name__ == "__main__":
    password_file_path = os.path.expanduser("~/Workstation/Python/else/passwords.txt")

    try:
        target_password = input("Enter the password to search: ")
        line_number = find_password_line(target_password, password_file_path)

        if line_number is not None:
            print(f"Password found on line {line_number}.")
        else:
            print("Password not found in the file.")

    except FileNotFoundError:
        print(f"Error: File not found at {password_file_path}")
    except Exception as e:
        print(f"An error occurred: {e}")

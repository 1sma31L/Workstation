def decToBinary(n):
    binaryStr = ""
    while n > 0:
        binaryStr = str(n % 2) + binaryStr
        n = n // 2
    return binaryStr

def binaryToDec(binaryStr):
    decimalNum = 0
    for digit in binaryStr:
        decimalNum = decimalNum * 2 + int(digit)
    return decimalNum

try:
    choice = int(input("Choose a conversion type:\n1. Decimal to Binary\n2. Binary to Decimal\nEnter 1 or 2: "))
    if choice == 1:
        decimal_input = int(input("Enter a decimal number: "))
        if decimal_input < 0:
            print("Please enter a non-negative decimal number.")
        else:
            binary_result = decToBinary(decimal_input)
            print(f"Binary representation: {binary_result}")
    elif choice == 2:
        binary_input = input("Enter a binary number: ")
        if all(bit in '01' for bit in binary_input):
            decimal_result = binaryToDec(binary_input)
            print(f"Decimal representation: {decimal_result}")
        else:
            print("Invalid binary input. Please enter a valid binary number.")
    else:
        print("Invalid choice. Please enter 1 or 2.")
except ValueError:
    print("Invalid input. Please enter a valid choice.")



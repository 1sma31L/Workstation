#Start
print("This function return the multiplications of two \
numbers if their multiplication is lowe than 1000, If not \
it returns there sum. ") 

def multiplication_or_sum(num1,num2):

    product= num1 * num2
    if product <= 1000:
        return product
    else:
        sum = num1+num2
        return sum

num1=int(input("Entre the First Number : "))
num2=int(input("Entre the Second Number : "))

result=multiplication_or_sum(num1,num2)
print("The result is :",result)
#End 
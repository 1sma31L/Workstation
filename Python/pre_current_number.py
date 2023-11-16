current_number=0
range2=int(input("Enter the last number : "))
for i in range(0,range2+1):
    if current_number==0:
        pre_number=0
    else:
        pre_number=current_number-1
    sum=pre_number+current_number
    print("Current Number",current_number,"Previous Number",pre_number,"sum :",sum)
    current_number+=1
    i++1

def Myapp():

    def f_to_c(f):
        c=(f-32)*5/9
        return c
    
    def c_to_f(c):
        f=c*(9/5)+32
        return f
    
    def Converse(f_to_c, c_to_f):
        opt=str(input("Enter your choice:\n\
1-From Celsius to Fahrenheit\n\
2-From Fahrenheit to Celsius\n\
--> "))    
        if opt == '1':
            c=float(input("Entre the temperature in Celsius : "))
            print("The temperature in Fahrenheit is :", c_to_f(c),'F°')
        elif opt=='2':
            f=float(input("Entre the temperature in Fahrenheit : "))
            print("The temperature in Celsius is :",f_to_c(f),'C°')
    
    Converse(f_to_c, c_to_f)

Myapp()
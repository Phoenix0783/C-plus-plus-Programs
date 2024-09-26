# number1 = 23;
# number2 = 34;

# sum = number1 + number2;

# print("sum of",number1,"and",number2," = ",sum)

def adds(a,b):
    return a+b;
                # IF THE int() IS NOT WRITTEN THEN PYTHON BY DEFAULT TREATS THE INPUT AS STRING
num1 = int(input("First number: "))
num2  = int(input("Second number: "))

sum = adds(num1,num2)

print("The sum of {0} and {1} is {2}".format(num1,num2,sum))
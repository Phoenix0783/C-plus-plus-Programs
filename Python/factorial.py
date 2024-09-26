num = int(input("Enter a number: "))

fact  = 1

for i in range(1 ,num+1):
    fact = fact * i;

print(f"The factorial of {num} is {fact}")

# ***********************************************************************
    
def factorial(num):
    return 1 if (num ==1 or num ==0) else num * factorial(num -1)

print(f"The factorial of {num} is {factorial(num)}")
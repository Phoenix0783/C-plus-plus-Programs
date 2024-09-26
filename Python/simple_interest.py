def simple_interest(p,t,r):
    simple_interest = (p * t * r)/100;    
    return simple_interest;

principal_amout = int(input("Enter Principal amout: "))
rate_of_interest = int(input("Rate of interest: "))
time_period = int(input("Time period: "))

result = simple_interest(principal_amout,time_period,rate_of_interest)

print(f"Simple Interest = {result}")
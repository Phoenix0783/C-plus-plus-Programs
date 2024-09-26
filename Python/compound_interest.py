def compound_interest(p,t,r):
    amount = p * (pow((1 + r/100),t)) 
    CI = amount - p
    return CI;

principal_amout = int(input("Enter Principal amout: "))
rate_of_interest = int(input("Rate of interest: "))
time_period = int(input("Time period: "))

result = compound_interest(principal_amout,time_period,rate_of_interest)

print(f"Compound Interest = {int(result)}")
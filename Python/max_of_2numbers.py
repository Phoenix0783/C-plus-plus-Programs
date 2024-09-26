def maximum(a,b):
    if a>=b:
        return a;
    else:
        return b;

a =2;
b = 7;
c=max(a,b)

print("Max of {0} and {1} = {2}".format(a,b, maximum(a,b)))
print("Max of {0} and {1} = {2}".format(a,b,c))
print(a if a>=b else b)
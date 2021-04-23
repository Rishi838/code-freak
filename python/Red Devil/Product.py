"""
Given two integer numbers return their product. If the product is greater than 1000, then return their sum
"""
a = int(input("Enter first number "))
b = int(input("Enter first number "))
print("The result is ",end="")
if(a*b>1000):
    print(a+b)
else:
    print(a*b)

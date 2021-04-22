"""
    Write a function called fizz_buzz that takes a number.
1.  If the number is divisible by 3, it should return “Fizz”.
2.  If it is divisible by 5, it should return “Buzz”.
3.  If it is divisible by both 3 and 5, it should return “FizzBuzz”.
4.  Otherwise, it should return the same number.
"""


def fizz_buzz(n):
    if (n % 3 == 0 and n % 5 == 0):
        return("FizzBuzz")
    if(n%3==0):
        return("Fizz")
    if(n%5==0):
        return("Buzz")
    return(n)
print(fizz_buzz(int(input("Enter the number "))))

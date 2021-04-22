"""
Write a function that prints all the prime numbers between 0 and limit where limit is a parameter.
"""


def primes(n):
    c = True
    for i in range(1,n+1):
        for j in range(2,i):
            if (i % j == 0):
                c = False
                break
        if (c == True):
            print(i)
        c = True


if __name__ == "__main__":
    primes(int(input("Enter limit ")))

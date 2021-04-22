"""
Write a function that returns the multiples of 3 and 5 between 0 and limit (parameter).
For example, if limit is 20, it should return the sum of 3, 5, 6, 9, 10, 12, 15, 18, 20.
"""

def multiples(n):
    lst = []
    for i in range(1,n+1):
        if(i%3==0 or i%5==0):
            lst.append(i)
    return(lst)
if __name__ == "__main__":
    print(multiples(int(input("Enter the number "))))

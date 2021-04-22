"""Write a function called showNumbers that takes a parameter called limit. It should print all the numbers between 0 and limit with a label to identify the even and odd numbers. For example, if the limit is 3, it should print:
0 EVEN
1 ODD
2 EVEN
3 ODD
"""

def showNumbers(n):
    for i in range(n+1):
        if(i%2!=0):
            print(i,"ODD")
        else:
            print(i,"EVEN")
if __name__ == "__main__":
    showNumbers(int(input("Enter the number ")))

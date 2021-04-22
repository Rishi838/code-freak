"""
Write a function called show_stars(rows). If rows is 5, it should print the following:
*
**
***
****
*****
"""

def show_stars(rows):
    for i in range(rows+1):
        for j in range(i):
            print("*",end="")
        print()

if __name__ == "__main__":
    show_stars(int(input("Enter number of rows ")))

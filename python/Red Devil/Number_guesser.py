def number_guesser():
    n = 100
    c = 0
    while (c < 5):
        i = int(input("Enter Your Guess\n"))
        if (i < n):
            print("Your guess is smaller")
        elif (i > n):
            print("Your guess is larger")
        else:
            print("Right answer")
            break
        c = c + 1
        print("You have", 5 - c, "chances left")
if __name__ == "__main__":
    number_guesser()

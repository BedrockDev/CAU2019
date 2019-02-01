# problem 5: print the multiplting table according to user input

while True:
    start = int(input("Please input starting column number: "))
    end = int(input("Please input ending column number: "))

    if end - start > 3:
        print("The difference should be smaller than 3\n")
    elif end - start < 0:
        print("Ending column should be bigger than starting column\n")
    else:
        break

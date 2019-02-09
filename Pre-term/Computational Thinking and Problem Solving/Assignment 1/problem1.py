# problem 1: get a user input of a integer and print its absolute value

while True:
    i = int(input("Enter a integer: "))
    if i > 0:
        print("=", i)
    elif i < 0:
        print("=", -i)
    else:
        break

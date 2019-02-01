# problem 5: print the multiplting table according to user input

# corrects the user input value
while True:
    try:
        start = int(input("Please input starting column number: "))
        end = int(input("Please input ending column number: "))

        # check for invalid input
        if start > 9 or start < 1 or end > 9 or end < 1:
            print("Invalid input - Both column numbers should be between 1 and 9")
        
        if end - start > 4:
            print("The difference should be same or smaller than 4\n")
        elif end - start <= 0:
            print("Ending column should be bigger than starting column\n")
        else:
            break
    except:
        continue

def print_blank(repeat):
    s = ""

    # creates a string that contain repeat amount of spaces
    for i in range(int(repeat)):
        s += " "

    print(s, end='')

window_width = 80 # seems it's default for IDLE on startup
column_width = 10
column_count = end - start + 1
column_margin = 4
# use below to use all same margin
# column_margin = (window_width - column_width*column_count) / (column_count + 1)

print()
print_blank(window_width/2 - 4)
print("From", start, "to", end)
print()

for i in range(1, 10):
    # print the blanks to start the first column
    # remove below to use all same margin
    print_blank((window_width - column_width*column_count - column_margin*column_count)/2)
    
    for j in range(start, end + 1):
        expression = str(j) + " X " + str(i) + " = "
        answer = i*j

        if int(answer / 10) == 0:
            # the number is 1 digit, needs an extra space
            expression += " "

        # print the expression and answer
        print_blank(column_margin)
        print(expression + str(answer), end='')

    # line break
    print()

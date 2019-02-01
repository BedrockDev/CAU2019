# problem 4: ascending sort of user input

data = []

print("Input 0 to end input\n")

while True:
    i = int(input("Input data: "))

    if i == 0:
        # end of input
        break
    else:
        # append data to the list
        data.append(i)

# sort the list to ascending order
data.sort()

print("Result:", data, "(" + str(len(data)) + " items)")

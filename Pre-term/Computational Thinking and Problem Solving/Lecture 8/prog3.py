# 2019-01-15
# file output example 2

# keeping the file open is bad for the system
# so it's better to write it in a string and write at once
# f = open('input.txt', 'w')

document = ""

while True:
    i = input(">> ")

    if i == "end":
        break
    else:
        # f.write(i + "\n")
        document += (i + "\n")

# this is better for performance
f = open('input.txt', 'w')
f.write(document)
f.close()

print("File is saved.")

r = open('input.txt', 'r')

count = 1;

while True:
    line = r.readline()
    if not line:
        break
    print("Line %2d | " % count, line, end='')
    count += 1

r.close()

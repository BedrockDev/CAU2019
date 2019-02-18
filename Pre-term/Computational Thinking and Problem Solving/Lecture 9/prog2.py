# 2019-02-18
# file existence check and output

name = input("Enter file name: ")

while True:
    try:
        f = open(name, 'r')
    except FileNotFoundError:
        print("File '%s' doesn't exist" % name)
        name = input("Enter file name: ")
    else:
        break

print(name, end='\n\n')
for line in f:
    print(line, end='')
    
f.close()

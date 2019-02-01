# 2019-02-01
# star printing

for i in range(6):
    for j in range(6):
        if j < i:
            print(" ", end='')
    print("*")

print("")

for i in range(6):
    for j in range(6):
        if j < 5 - i: # could change the range
            print(" ", end='')
            
    for k in range(i*2 + 1):
        print("*", end='')

    print("")

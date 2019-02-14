# 2019-02-14
# multiplication table

def print_table(x):
    for i in range(1,10):
        print("%-2d X %2d = %4d" % (x, i, x*i))

print_table(int(input("Input a number to create table: "))

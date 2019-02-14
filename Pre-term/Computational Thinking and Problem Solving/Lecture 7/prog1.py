# 2019-02-14
# string calculator

exp = input("Enter an expression: ").split("+")
sum = 0

for i in exp:
    sum += int(i)

print("Total is", sum)

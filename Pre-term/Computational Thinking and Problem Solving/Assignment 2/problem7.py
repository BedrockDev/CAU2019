# problem 7: expression calculator

# change minus to negative value with the integer
exp = input("Enter an expression: ").replace(" ", '').replace("-", "+-").split('+')

result = 0

for number in exp:
    result += int(number)

print("=", result)

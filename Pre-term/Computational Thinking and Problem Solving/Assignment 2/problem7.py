# problem 7: expression calculator

exp = '+' + input("Enter an expression: ").replace(" ", '') + '+'

operand = [] # index of operands in the string
result = 0

for i in range(len(exp)):
    if exp[i] == '+' or exp[i] == '-':
        operand.append(i)

for i in range(len(operand) - 1):
    value = exp[operand[i] + 1:operand[i+1]]
    if value != '':
        if exp[operand[i]] == '+':
            result += int(value)
        if exp[operand[i]] == '-':
            result -= int(value)

print("=", result)

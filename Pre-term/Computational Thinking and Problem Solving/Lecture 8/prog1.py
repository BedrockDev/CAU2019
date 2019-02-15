# 2019-01-15
# C to F, F to C

def c2f(value):
    return 9/5*value + 32

def f2c(value):
    return 5/9*(value - 32)

while True:
    degree = input("Input degree: ")

    if degree is not "":
        print(degree, "F is %.2f C" % f2c(float(degree)))
        print(degree, "C is %.2f F" % c2f(float(degree)))

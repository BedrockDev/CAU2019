# 2019-01-31
# Quadratic equation example

from math import sqrt

print("Enter variables of your equation (ax^2 + bx + c = 0)")

a = float(input("a = "))
if a == 0:
    print("Equation is not quadratic")

else:
    b = float(input("b = "))
    c = float(input("c = "))

    # variable for checking if x exists
    equation_check = b**2 - 4*a*c

    if equation_check < 0:
        # the x doesn't exist
        print("x is not a real number")

    else:
        D = sqrt(equation_check)
        
        if equation_check == 0:
            # only 1 x value exist
            print("x =", (-b + D)/(2*a))

            # check if user wants to show explanation
            if input("Show explanation (Y/N) : ") == 'Y':
                print((-b + D)/(2*a),
                       "= (" + str(-b) + " + sqrt(" + str(b) + "^2" + " - 4x" + str(a) + "x" + str(c) + ")) / 2x" + str(a))
            
        else:
            # 2 x value exist
            print("x =", (-b + D)/(2*a), (-b - D)/(2*a))

            # check if user wants to show explanation
            if input("Show explanation (Y/N) : ") == 'Y':
                print((-b + D)/(2*a),
                      "= (" + str(-b) + " + sqrt(" + str(b) + "^2" + " - 4x" + str(a) + "x" + str(c) + ")) / 2x" + str(a))
                print((-b - D)/(2*a),
                      "= (" + str(-b) + " - sqrt(" + str(b) + "^2" + " - 4x" + str(a) + "x" + str(c) + ")) / 2x" + str(a))

# 2019-02-01
# leap year calculator

year = int(input("Enter a year to calculate: "))
leap = False

if year % 4 == 0:
    leap = True

if year % 100 == 0:
    leap = False

if year % 400 == 0:
    leap = True

if leap:
    print("The year", year, "is leap year")
else:
    print("The year", year, "is not leap year")

'''
# the original answer

if year % 4 == 0:
    if year % 100 == 0:
        if year % 400 == 0:
            leap = True
        else:
            leap = False
    else:
        leap = True
else:
    leap = False
'''

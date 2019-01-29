# 2019-01-29

# money rate calculator
money = 1000
rate = 0.05
year = 3

for i in range(year):
    money += money*rate
    print("Year " + str(i + 1) + ", balance is " + str(int(money)))

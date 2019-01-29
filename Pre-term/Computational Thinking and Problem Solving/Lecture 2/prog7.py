# 2019-01-29

# money rate calculator
money = int(input("Account balance: "))
rate = int(input("Rate (%): "))
year = int(input("Simulation year: "))

for i in range(year):
    money += money*(rate/100)
    print("Year " + str(i + 1) + ", balance is " + str(int(money)))

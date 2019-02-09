# problem 3: menu - price robot

menu_name = ['noodle','ham', 'egg', 'spaghetti']
menu_price = [500, 200, 100, 900]

print("Press enter to quit")

while True:
    print("\nHello, please choose a menu from below.")
    selection = input("[noodle, ham, egg, spaghetti] : ")

    if selection == "":
        break

    if selection in menu_name:
        print("It is", menu_price[menu_name.index(selection)], "won.")
    else:
        print("There is no such menu.")     

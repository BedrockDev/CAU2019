# problem 3: menu - price robot

menu = {'noodle':500, 'ham':200, 'egg':100, 'spaghetti':900}

print("Press enter to quit")

while True:
    print("\nHello, please choose a menu from below.")
    selection = input("[noodle, ham, egg, spaghetti] : ")

    if selection == "":
        break

    try:
        print("It is", menu[selection], "won.")
    except:
        print("There is no such menu.")

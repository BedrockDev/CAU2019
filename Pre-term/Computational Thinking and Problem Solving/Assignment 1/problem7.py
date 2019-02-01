# problem 7: printing a sin graph vertically

from math import sin, pi

limit = int(input("Enter steps to render: "))

graph_character = '#'
window_width = 80
max_height = 10 # defines the height of 1
step = 10 # defines steps in single radian pi

def print_blank(repeat):
    s = ""

    # creates a string that contain repeat amount of spaces
    for i in range(round(repeat)):
        s += " "

    print(s, end='')

for i in range(limit):
    value = sin(i / step * pi)

    if int(value*max_height) > 0:
        print_blank(window_width/2 - value*max_height)
        print(graph_character, end='')
        
        print_blank(value*max_height - 1)
        print("|")
        
    elif int(value*max_height) < 0:
        print_blank(window_width/2)
        print("|", end='')
        
        print_blank(-value*max_height - 1)
        print(graph_character)
        
    else:
        print_blank(window_width/2)
        print(graph_character)

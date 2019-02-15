# problem 2: sin, cos, axis drawing

from math import sin, cos, pi

window_width = 80
unit = 15
left_margin = " " * int(window_width / 2 - unit)

def get_pos(value):
    # position within graph width range (0 is 15)
    return int(unit + round(value * unit))

def render(x):
    row = [' '] * (unit*2 + 1)
    row[get_pos(0)] = '|'
    row[get_pos(sin(x))] = '*'
    row[get_pos(cos(x))] = '+'

    row_str = left_margin

    for c in row:
        row_str += c

    print(row_str)

for i in range(0, 20):
    render(2*pi*i/20)

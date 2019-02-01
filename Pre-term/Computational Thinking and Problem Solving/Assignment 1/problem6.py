# problem 6: dice based racing game

from random import randint

p1 = input("Input player 1's name: ")
p2 = input("Input player 2's name: ")

p1_pos = 0
p2_pos = 0

round_count = 0

while True:
    round_count += 1
    print("\n [ Round", round_count, "]")

    p1_throw = randint(1, 6)
    p1_pos += p1_throw
    print(p1, "got", p1_throw, ", current position is", p1_pos)

    p2_throw = randint(1, 6)
    p2_pos += p2_throw
    print(p2, "got", p2_throw, ", current position is", p2_pos)

    if p1_pos >= 30 and p2_pos >= 30:
        print('\n', p1, "and", p2, "duced in", round_count, "rounds.")
        break
    elif p1_pos >= 30 and p2_pos < 30:
        print('\n', p1, "won in", round_count, "rounds!")
        break
    elif p2_pos >= 30 and p1_pos < 30:
        print('\n', p2, "won in", round_count, "rounds!")
        break

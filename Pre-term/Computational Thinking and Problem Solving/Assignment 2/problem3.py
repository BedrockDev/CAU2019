# problem 3: lottery number generator

import random

freq = [0]*45
recommendation = []

def generate():
    return random.randint(1, 45)

def lotto_generator():
    numbers = [generate()]

    for i in range(1, 6):
        number = generate()

        # remove duplicates
        while number in numbers:
            number = generate()

        numbers.append(number)

    return numbers

for i in range(0, 1000):
    lotto = lotto_generator()
    for j in lotto:
        freq[j - 1] += 1
    # print(lotto)

for i in range(0, 6):
    top = max(freq)
    recommendation.append(str(freq.index(top) + 1) + " (" + str(top) + " times)")
    # resets the top value
    freq[freq.index(top)] = -1

for number in recommendation:
    print(number)

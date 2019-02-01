# 2019-02-01
# number guessing game

from random import randint

number = randint(1, 20)
count = 0

while True:
    i = int(input("Enter your guess: "))
    count += 1

    if i == number:
        print("You guessed right in", count, "time(s), the number was", number)
        break
    elif i > number:
        print("Your guess is bigger, try again with smaller number")
    else:
        print("Your guess is smaller, try again with bigger number")

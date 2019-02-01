# 2019-02-01
# how many number you need to add until 3000?

total = 0
i = 1

while True:
    total += i
    print("Current sum:", total)
    
    if total >= 3000:
        print(i, "was the final value")
        break
    
    i += 1

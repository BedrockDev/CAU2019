list = []
sum = 0

while True:
    num = int(input('Enter number (1-10000): '))
    
    list.append(num)
    for i in list:
            print("+%5d" % i)
    sum += num
    
    print("=%5d" % sum)

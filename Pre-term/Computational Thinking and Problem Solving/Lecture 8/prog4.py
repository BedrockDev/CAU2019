# 2019-01-15
# csv file reading

f = open('score.csv', 'r')
lines = f.readlines()
f.close()

for line in lines:
    total = 0
    count = 0
    scores = line[:-1].split(',')

    # print(scores)
    
    for score in scores:
        total += int(score)
        count += 1

    print("Total = %3d, Avg = %.2f" % (total, total / count))

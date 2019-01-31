# 2019-01-31
# number sorting and reading in list

score = [[80, 85, 90], [82, 87, 92], [75, 92, 84]]

for i in score:
    student = i
    score_sum = 0
    for j in student:
        score_sum += j
    # print the sum of score
    i.append(score_sum)
    print(i[3])

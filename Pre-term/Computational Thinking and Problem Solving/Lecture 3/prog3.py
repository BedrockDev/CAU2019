# 2019-01-31
# number sorting and reading in list

score1 = [80, 85, 90]
score2 = [82, 87, 92]
score3 = [75, 92, 84]

score = [score1, score2, score3]

for i in score:
    student = i
    score_sum = 0
    for j in student:
        score_sum += j
    i.append(score_sum)
    print(i[3])

        

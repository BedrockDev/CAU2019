# 2019-01-31
# number sorting and reading in list

score = [[80, 85, 90], [82, 87, 92], [75, 92, 84]]

for i in range(len(score)):
    student = score[i]
    score_sum = 0
    for j in student:
        score_sum += j
    # append the sum of scores
    score[i] = [score_sum] + score[i]

# sorts the students according to the total sum number
score.sort(reverse=True)

for s in score:
    print(s[0], s[1], s[2], s[3])

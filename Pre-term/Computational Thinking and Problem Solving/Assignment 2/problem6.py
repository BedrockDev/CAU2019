# problem 6: score processing

f = open('score.csv', 'r')

score = []

for line in f:
    column = line.replace('\n', '').split(",")
    score.append([column[0], int(column[1]), int(column[2]), int(column[3]),
                  int(column[1]) + int(column[2]) + int(column[3])])

for person in score:
    rank = 1
    for compare in score:
        if compare[4] > person[4]:
            rank += 1
    person.append(rank)
            
print("%-8s │ %4s │ %4s │ %4s │ %6s │ %4s" % ("ID", "Kor", "Eng", "Math", "Total", "Rank"))
print("%-8s ┼ %4s ┼ %4s ┼ %4s ┼ %6s ┼ %4s" % ("─"*8, "─"*4, "─"*4, "─"*4, "─"*6, "─"*4))
      
for person in score:
      print("%8s │ %4d │ %4d │ %4d │ %6d │ %4d" %
            (person[0], person[1], person[2], person[3], person[4], person[5]))

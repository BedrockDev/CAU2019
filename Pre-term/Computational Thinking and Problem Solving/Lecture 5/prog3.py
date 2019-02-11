# 2019-02-11
# grade management system

grade = [[20170101, '홍길동', 90], [20172831, '이몽룡', 85], [20170938, '성춘향', 95], [20173168, '강감찬', 87]]

print("Sorted by ID number\n")

for person in grade:
    rank = 1

    for compare in grade:
        if compare[2] > person[2]:
            count += 1

    person.append(rank)

    print(person[0], person[1], person[2], person[3])

print("\nSorted by ranking\n")

for i in range(1, len(grade) + 1):
    for person in grade:
        if person[3] is i:
            print(person[0], person[1], person[2], person[3])
            break # this blocks the duplicated ranks


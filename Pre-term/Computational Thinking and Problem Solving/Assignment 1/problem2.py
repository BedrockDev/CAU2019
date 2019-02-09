# problem 2: finding and inserting a data to list

town = ['흑석동', '사당동', '상도동', '노량진동', '규동']

print("Press enter to quit")

while True:
    i = input("Enter town name: ")
    if i is "":
        break
    else:
        if i in town:
            print("The town index is", town.index(i) + 1)
        else:
            town.append(i)
            print("Adding the town in index", len(town))

# problem 4: dictonary

f = open('dict_test.TXT', 'r', encoding='utf-8')

dictionary = {}

for line in f:
    # split at the first space except line break
    word = line[:-1].split(" : ", 1)
    # add word to dictionary
    dictionary.update({word[0]:word[-1]})

f.close()

while True:
    query = input("Enter word: ")
    result = dictionary.get(query, "Error: the word '" + query + "' doesn't exist")

    if 'Error' in result:
        # error message
        print(result)
    else:
        print(query, '=', result)

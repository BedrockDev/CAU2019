# problem 5: 5 word shiritori

f = open('dict_test.TXT', 'r', encoding='utf-8')
words = []

for line in f:
    word = line.split(" : ", 1)[0]
    if len(word) == 5:
        if " n." in line:
            words.append(word)

f.close()

previous = "apple"
used_words = [previous]

while True:
    while True:
        word = input(previous + ", next word: ").lower()
        
        if len(word) is 5:
            if word in words:
                if word not in used_words:
                    if word[0] == previous[-1]:
                        used_words.append(word)
                        previous = word
                        break
                    else:
                        print("Error: the word '" + word + "' doesn't match")
                else:
                    print("Error: the word '" + word + "' was already used")
            else:
                print("Error: the word '" + word + "' doesn't exist")
        elif len(word) > 5:
            print("Error: the word is longer than 5 characters")
        else:
            print("Error: the word is shorter than 5 characters")

# problem 5: 5 word shiritori

previous = "apple"
used_words = [previous]

while True:
    while True:
        word = input(previous + ", next word: ").lower()
        
        if len(word) is 5:
            if word not in used_words:
                if word[0] == previous[-1]:
                    used_words.append(word)
                    previous = word
                    break
                else:
                    print("Error: the word'" + word + "' doesn't match")
            else:
                print("Error: the word '" + word + "' was already used")
        elif len(word) > 5:
            print("Error: the word is longer than 5 characters")
        else:
            print("Error: the word is shorter than 5 characters")

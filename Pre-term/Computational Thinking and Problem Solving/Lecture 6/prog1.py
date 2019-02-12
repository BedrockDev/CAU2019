sentence = 'I am tom and you are jane'

words = sentence.split(" ")

for word in words:
    print(word)

print("(Total", len(words), "words)")

# should be like this without the split

word_count = 1
word = ''

for c in sentence:
    if c is ' ':
        word_count += 1
        print()
    else:
        print(c, end='')

print("\n(Total", word_count, "words)")

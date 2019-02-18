# 2019-02-18
# sentence to dictionary meaning

sentence = "It is truth universally acknowledged"

f = open('dict_test.TXT', 'r', encoding='utf-8')

dictionary = {}

for line in f:
    word = line[:-1].split(" : ", 1)
    dictionary.update({word[0]:word[-1]})

f.close()

print("Sentence :", sentence)

for word in sentence.split(" "):
    print(word.lower(), ':', dictionary[word.lower()])


# problem 1: sourcing the names from formatted files

def get_name(sentence):
    # words to replace
    replace = ["저는 ", "이라고 합니다.", "라고 합니다.", "제 이름은 ", "입니다."]

    for word in replace:
        sentence = sentence.replace(word, "")

    return sentence.strip()

while True:
    sentence = input("Input a sentence: ")
    print("Name:", get_name(sentence))

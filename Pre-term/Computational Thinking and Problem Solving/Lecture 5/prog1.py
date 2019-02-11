# 2019-02-11
# dictionary example

phonebook = {'강감찬':'010-3333-4444', '김유신':'010-3928-0391', '이순신':'010-8472-3092', '홍길동':'010-2727-0948'}

while True:
    name = input("Input name: ")

    if name is "":
        break
    else:
        if name in phonebook:
            print(name + "'s number is", phonebook[name])
        else:
            print(name, "doesn't exist")

# also can use
# number = phonebook.get(key, default_value)
# ...
# print(number)

class Calculator:
    def __init__(self):
        self.result = 0
        print("Calculator instance initialized")

    def add(self, value):
        print("%d + %d = %d" % (self.result, value, self.result + value))
        self.result += value
        return self.result

    def sub(self, value):
        print("%d - %d = %d" % (self.result, value, self.result - value))
        self.result -= value
        return self.result

    def display(self):
        print("Calculator value:", self.result)

    def reset(self):
        self.result = 0

c1 = Calculator()
c2 = Calculator()

print(c1.add(3))
print(c1.add(4))
print(c2.add(3))
print(c2.add(7))

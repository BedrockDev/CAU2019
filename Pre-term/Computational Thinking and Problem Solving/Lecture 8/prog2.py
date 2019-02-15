# 2019-01-15
# file output example

f = open('data.txt', 'w')

for i in range(1, 11):
    f.write("Line %2d\n" % i)

f.close()

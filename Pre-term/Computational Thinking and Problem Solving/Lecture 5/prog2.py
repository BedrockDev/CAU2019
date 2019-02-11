# 2019-02-11
# co-solvent for 27 and 86

a = set(range(27, 100000, 27))
b = set(range(86, 100000, 86))

c = a & b # can also use a.intersection(b)
d = list(c)
d.sort()

print(d)

# maybe it's better to use
# i % 27 is 0 and i % 86 is 0

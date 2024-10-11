import copy
a = [[1, 2], [3, 4]]
b = a.copy()
c = copy.deepcopy(a)
a[0][0] = 99
print(b)
print(c)
# [[99, 2], [3, 4]]
# [[1, 2], [3, 4]]
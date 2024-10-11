def my_gen():
    yield 1
    yield 2
    yield 3

gen = my_gen()
print(next(gen))
print(next(gen))

# 1
# 2
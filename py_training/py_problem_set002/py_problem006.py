def my_function(*args, **kwargs):
    print(args)
    print(kwargs)

my_function(1, 2, 3, name="Taro", age=25)

# (1, 2, 3)
# {'name': 'Taro', 'age': 25}
#このコードを実行するとどうなりますか？ 修正するにはどうすれば良いでしょうか？

x = 10

def my_func():
    x = x + 5
    print(x)

my_func()
#  x = x + 5
#        ^
#UnboundLocalError: cannot access local variable 'x' where it is not associated with a value
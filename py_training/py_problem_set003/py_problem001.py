#**dict** ```py
#このコードを実行するとどのようなエラーが出ますか
my_set = {1, 2, 3}
my_list = [4, 5]

my_set.add(my_list)  # リストをセットに追加
#```
"""
||
    my_set.add(my_list)  
    ^^^^^^^^^^^^^^^^^^^
TypeError: unhashable type: 'list'
||
||
```py
my_set = {1, 2, 3}
my_list = (4, 5) #Unhashableなtupleに変更

my_set.add(my_list)  
print(my_set) 
# {(4, 5), 1, 2, 3}
```
||
||
```py
my_set = {1, 2, 3}
my_list = [4, 5]

# リストの要素を一つずつセットに追加
my_set.update(my_list)
# my_set.update([item for item in my_list])
print(my_set)
# {1, 2, 3, 4, 5}
```
||
||
リストは変更不可なオブジェクトなので、セットに追加することができません。
setに追加できるのは**Hashable**で**Immutable**なものだけです！！！
解説[pythonのtypeについてまとめてみました](https://spring-front-8d9.notion.site/PyObject-1215f53ba2a1809e9484ebd7a5b3e5ec?pvs=4)
||
"""
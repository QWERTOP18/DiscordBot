//```C
#include <stdio.h>

int main()
{
    char str[20] = "before\n";
    str = "after\n";
    printf("%s\n", str);
    return 0;
}
//```
//error: array type 'char[8]' is not assignable
//    str = "after\n";
//zsh: bus error  ./a.out

//```C
//||
int answer()
{
    char *str = "before\n"; // ポインタを使用
    str = "after\n"; // 新しい文字列リテラルを指す
}
int answer2()
{
    char str[20] = "before\n";
    strcpy(str, "after");
}
//```
//||
//'''C
#include <stdio.h>


int _toupper(int ascii)
{
    return (ascii >= 'a' && ascii <= 'z')? ascii - 'a' + 'A' : ascii;
}
int main()
{
    char *str = "Hello Debug Master!!\n";

    int i = 0;
    while(str[i])
    {
        str[i] = _toupper(str[i]);
        i++;
    }
    printf("%s\n", str);
    return 0;
}
//```
//**zsh: bus error  ./a.out**

//||```C
//リテラルは読みと取り専用
int answer()
{
char str[] = "Hello Debug Master!!\n";
//もしくは
char *tmp = strdup(str);
}
//||```
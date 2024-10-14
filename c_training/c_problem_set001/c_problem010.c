//```C
#include <stdio.h>

int func(char *str)
{
    char *ptr = str;
    while(*ptr)
        ptr++;
    return ptr - str;
}

int main()
{
    char str[] = "Good morning\n";
    printf("%d\n", func(str));
    return 0;
}
//```
//||13$|| 

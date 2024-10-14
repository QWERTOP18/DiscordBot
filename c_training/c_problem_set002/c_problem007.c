//```C
#include <unistd.h>

int main()
{
    char str[] = "this is about FILE DISCRIPTOR\n";
    write(STDOUT_FILENO, str, sizeof(str)-1);

    return STDIN_FILENO;    
}
//```
/*||
this is about FILE DISCRIPTOR
||*/
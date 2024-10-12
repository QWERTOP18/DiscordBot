//```c
#include <unistd.h>

int main() {
    char str[] = "helloworld!\n";
    char *ptr = str; 

    while (*ptr) {
        if (*ptr == 'h' || *ptr == 'w') 
            *ptr = *ptr - 32;
    
        write(1, ptr, 1);
        ptr++;
    }
    
    return 0;
}
//```

/*
||
HelloWorld!$
||
*/
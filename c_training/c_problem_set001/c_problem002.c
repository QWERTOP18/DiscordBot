#include <unistd.h>

int main() {
    int a = 5;
    char num = a + '0'; 
    write(1, &num, 1);
    write(1, "\n", 1);
    return 0;
}

/*
||
5
||
*/
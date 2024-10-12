#include <unistd.h>

int main() {
    int i = 0;
    while (i < 3) {
        char num = i + '0';
        write(1, &num, 1);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
/*
||
0
1
2
||
*/
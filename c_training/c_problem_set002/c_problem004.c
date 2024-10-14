//```C
#include <stdio.h>

void run_stati() {
    static int count = 0;
    count++;
    printf("%d\n", count);
}

int main() {
    run_static();
    run_static();
    run_static();
    return 0;
}
//```
/*||
1
2
3
||*/
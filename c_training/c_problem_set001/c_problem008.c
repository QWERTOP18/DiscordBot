//**変数のスコープ** */```C
#include <stdio.h>

int func() {
    int x = 10;
    return x;
}

int main() {
    int x = 5;
    printf("%d\n", func());
    return 0;
}
//```
/*||
10$
||*/
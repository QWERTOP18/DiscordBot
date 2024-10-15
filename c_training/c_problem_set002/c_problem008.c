//**メモリアライメント**```C
#include <stdio.h>

typedef struct s_Example {
    char a;    // 1バイト
    int b;     // 4バイト
    char c;    // 1バイト
}t_Example;

typedef struct s_Optimized {
    int b;     // 4バイト
    char a;    // 1バイト
    char c;    // 1バイト
}t_Optimized;

int main() {
    printf("Example:   %zu\n", sizeof(t_Example));
    printf("Optimized: %zu\n", sizeof(t_Optimized));
    return 0;
}
//```

/*||
Example:   12
Optimized: 8
||*/
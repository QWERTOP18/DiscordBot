//**add**```C
#include <stdio.h>
int binary_add(int a, int b) {
    while (b != 0) {
        int carry = a & b;  
        a = a ^ b;          
        b = carry << 1; 
    }
    return a;
}

int main()
{
    int a = 10;
    int b = 5;
    printf("%d + %d = %d\n", a, b, binary_add(a, b));
    return 0;
}
//```


/*
||
10 + 5 = 15
||
*/
//**sizeof type**```C
#include <stdio.h>

int main()
{
    int num = 10;
    
    printf("sizeof(int *) = %zu\n", sizeof(&num));

    printf("sizeof(char) = %zu\n", sizeof((char)num));
    printf("sizeof(short) = %zu\n", sizeof((short)num));
    printf("sizeof(int) = %zu\n", sizeof(num));
    printf("sizeof(long) = %zu\n", sizeof((long)num));
    printf("sizeof(long long) = %zu\n", sizeof((long long)num));
    
    printf("sizeof(float) = %zu\n", sizeof((float)num));
    printf("sizeof(double) = %zu\n", sizeof((double)num));
    printf("sizeof(long double) = %zu\n", sizeof((long double)num));
    return 0;
}
//```

/*
||
sizeof(int *) = 8
sizeof(char) = 1
sizeof(short) = 2
sizeof(int) = 4 //少なくとも16ビット（2バイト）
sizeof(long) = 8 //少なくとも32ビット
sizeof(long long) = 8 //必ず64ビット
sizeof(float) = 4
sizeof(double) = 8
sizeof(long double) = 8 //80ビットまたは128ビットである場合もある
||
*/
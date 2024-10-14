//```C
#include <unistd.h>

int main() {
    int i = 1;
    while (i < 10) {
        char num = i + '0';
        if(i % 2)
          write(1, &num, 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
//```

/*
||
13579$
$は改行のことです。気分次第でつけます^^
||
*/
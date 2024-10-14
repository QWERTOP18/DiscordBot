//**関数ポインタの配列**```C
#include <stdio.h>

void option1() { printf("C\n"); }
void option2() { printf("C++\n"); }
void option3() { printf("JavaScript\n"); }

void handle_choice(int choice, void (*menu[])(void)) {
    if (1 <= choice && choice <= 3) {
        menu[choice - 1]();
    } else {
        printf("Invalid choice\n");
    }
}

int main() {

    void (*menu[])(void) = { option1, option2, option3 };

    int choice = 0;
    while(++choice < 5)
        handle_choice(choice, menu);

    return 0;
}
//```

/*||
C
C++
JavaScript
Invalid choice
||*/
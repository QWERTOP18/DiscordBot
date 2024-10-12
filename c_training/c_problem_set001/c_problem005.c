#include <unistd.h>

int main() {
    char nums[] = {'1', '2', '3', '\n'};
    write(1, nums, 4);
    return 0;
}

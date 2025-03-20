#include <stdio.h>

int main() {
    int *ip;  // Uninitialized pointer
    *ip = 10; // Trying to assign value to an undefined address
    printf("Value: %d\n", *ip);
    return 0;
}

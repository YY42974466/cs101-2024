#include <stdio.h>

int main() {
    int *ip = NULL;  // Pointer initialized to NULL
    *ip = 10;        // Attempt to assign value to NULL address
    printf("Value: %d\n", *ip);
    return 0;
}

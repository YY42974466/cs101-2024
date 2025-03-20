#include <stdio.h>

int main() {
    char *p;
    *p = 'A'; // Uninitialized pointer, likely to cause segmentation fault
    printf("Character: %c\n", *p);
    return 0;
}

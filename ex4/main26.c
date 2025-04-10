#include <stdio.h>

int my_strlen(const char *s) {
    if (*s == '\0') return 0;
    return 1 + my_strlen(s + 1);
}

int main() {
    const char *str = "IU is a girl!";
    printf("Length of string: %d\n", my_strlen(str));
    return 0;
}

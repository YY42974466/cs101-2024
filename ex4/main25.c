#include <stdio.h>

void multi(int i, int j) {
    if (j == 1) {
        printf("%d * %d = %d\n", i, j, i * j);
        return;
    }
    multi(i, j - 1);
    printf("%d * %d = %d\n", i, j, i * j);
}

int main() {
    int i = 1;
    multi(i, 9);
    return 0;
}

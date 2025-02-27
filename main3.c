#include <stdio.h>

int main() {
    unsigned char i = 200;
    unsigned char j = 220;
    unsigned char k = 0;

    // 避免直接 i + j 造成溢位，使用 (j - i) / 2 + i 的變形公式
    k = ((j - i) / 2) + i;

    printf("(%d + %d) / 2 = %d\n", i, j, k);

    return 0;
}


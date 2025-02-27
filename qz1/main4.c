#include <stdio.h>

int main() {
    for (int i = 1; i <= 81; i++) {  // 9行 × 9列 = 81
        int y = (i - 1) / 9 + 1;  // 決定 y (1~9)
        int x = (i - 1) % 9 + 1;  // 決定 x (1~9)
        
        printf("%d×%d=%d\t", y, x, y * x);

        if (x == 9) // 每 9 次換行
            printf("\n");
    }
    return 0;
}


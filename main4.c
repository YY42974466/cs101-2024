#include <stdio.h>

int main() {
    for (int i = 1; i <= 81; i++) {  // 9�� �� 9�C = 81
        int y = (i - 1) / 9 + 1;  // �M�w y (1~9)
        int x = (i - 1) % 9 + 1;  // �M�w x (1~9)
        
        printf("%d��%d=%d\t", y, x, y * x);

        if (x == 9) // �C 9 ������
            printf("\n");
    }
    return 0;
}


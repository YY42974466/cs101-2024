#include <stdio.h>

int main() {
    int n;
    printf("請輸入一個整數: ");
    scanf("%d", &n);

    int count = 0;
    int temp = n; // 保留原數值，避免影響後續輸出

    while (temp) {
        count += temp & 1; // 檢查最右邊的位元是否為 1
        temp >>= 1;         // 右移一位
    }

    printf("%d 的二進位中有 %d 個 1\n", n, count);

    return 0;
}


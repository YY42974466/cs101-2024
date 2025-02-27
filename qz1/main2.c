#include <stdio.h>

int main() {
    int num;
    printf("叫块计");
    scanf("%d", &num);

    int lastDigit = num % 10;  // 眔程计
    int firstDigit = num;

    // ㄏノ癹伴т材计
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit; // 璸衡羆㎝
    printf("材计: %d\n", firstDigit);
    printf("程计: %d\n", lastDigit);
    printf("羆㎝: %d\n", sum);

    return 0;
}


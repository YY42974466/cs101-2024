#include <stdio.h>

int main() {
    int i;
    printf("請輸入里程（公尺）：");
    scanf("%d", &i);

    int fare = 70; // 基本費用

    if (i > 1600) {
        // 計算超過 1600 公尺的部分
        int extra_distance = i - 1500;
        int extra_fare = ((extra_distance + 99) / 100) * 10; // 進位計算每 100 公尺加 10 元
        fare += extra_fare;
    }

    printf("車資: %d元\n", fare);

    return 0;
}


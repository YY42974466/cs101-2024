#include <stdio.h>

int main() {
    int num;
    printf("�п�J�@�ӼƦr�G");
    scanf("%d", &num);

    int lastDigit = num % 10;  // ���o�̫�@���
    int firstDigit = num;

    // �ϥΰj����Ĥ@���
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit; // �p���`�M
    printf("�Ĥ@���: %d\n", firstDigit);
    printf("�̫�@���: %d\n", lastDigit);
    printf("�`�M: %d\n", sum);

    return 0;
}


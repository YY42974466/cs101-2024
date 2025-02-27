#include <stdio.h>

int main() {
    int i;
    printf("�п�J���{�]���ء^�G");
    scanf("%d", &i);

    int fare = 70; // �򥻶O��

    if (i > 1600) {
        // �p��W�L 1600 ���ت�����
        int extra_distance = i - 1500;
        int extra_fare = ((extra_distance + 99) / 100) * 10; // �i��p��C 100 ���إ[ 10 ��
        fare += extra_fare;
    }

    printf("����: %d��\n", fare);

    return 0;
}

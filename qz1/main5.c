#include <stdio.h>

int main() {
    int n;
    printf("�п�J�@�Ӿ��: ");
    scanf("%d", &n);

    int count = 0;
    int temp = n; // �O�d��ƭȡA�קK�v�T�����X

    while (temp) {
        count += temp & 1; // �ˬd�̥k�䪺�줸�O�_�� 1
        temp >>= 1;         // �k���@��
    }

    printf("%d ���G�i�줤�� %d �� 1\n", n, count);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

// �禡�ŧi
int cubeByValue(int n);

int main(void) {
    int number = 5; // �w�q�ܼƨê�l�Ƭ� 5

    // ��X��l��
    printf("The original value of number is %d\n", number);

    // �I�s cubeByValue �禡�p��ߤ��
    number = cubeByValue(number);

    // ��X�p��᪺�s��
    printf("\nThe new value of number is %d\n", number);

    system("pause"); // ���ݨϥΪ̫��U����
    return 0;
}

// cubeByValue �禡��@
int cubeByValue(int n) {
    return n * n * n; // �p�� n ���ߤ��
}

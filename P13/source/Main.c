#include <stdio.h>
#include <stdlib.h>

// �ק�G�N�ѼƧאּ����
void CubeByReference(int* mPtr);

int main(void) {
    int number = 5; // ��l���ܼ�
    printf("The original value of number is %d\n", number);

    // �ǤJ�ܼƪ���}
    CubeByReference(&number);

    // ��X�ק�᪺��
    printf("\nThe new value of number is %d\n", number);

    system("pause");
    return 0;
}

// �ק�G�ϥΫ��оާ@�i��ߤ�p��
void CubeByReference(int* mPtr) {
    *mPtr = (*mPtr) * (*mPtr) * (*mPtr); // �ѰѦҨíp��ߤ�
}

#include <stdio.h>
#include <stdlib.h>

// �禡�ŧi�A�z�L�Ѧҡ]���С^�ק�ƭ�
void cubeByReference(int* nPtr);

int main(void) {
    int number = 5; // �w�q�ܼƨê�l�Ƭ� 5

    // ��X��l��
    printf("The original value of number is %d\n", number);

    // �I�s cubeByReference �禡�A�N number ����}�ǤJ
    cubeByReference(&number);

    // ��X�ק�᪺�s��
    printf("\nThe new value of number is %d\n", number);

    system("pause"); // ���ݨϥΪ̫����~��
    return 0;
}

// cubeByReference �禡��@
void cubeByReference(int* nPtr) {
    // �z�L���Эק�ǤJ�ܼƪ��Ȭ���ߤ��
    *nPtr = *nPtr * *nPtr * *nPtr;
}

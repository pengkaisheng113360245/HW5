#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    int* aPtr;

    a = 7;          // �N�ܼ� a �]�w�� 7
    aPtr = &a;      // �N a ����}���������� aPtr

    // ��� a ����}�H�� aPtr ���ȡ]�]�N�O a ����}�^
    printf("The address of a is %p\nThe value of aPtr is %p\n", &a, aPtr);

    // ��� a ���ȥH�� *aPtr ���ȡ]�]�N�O a ���ȡ^
    printf("\nThe value of a is %d\nThe value of *aPtr is %d\n", a, *aPtr);

    // ���� * �M & �O���ɪ�
    printf("\nShowing that * and & are complements of each other\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

    system("pause"); // ���ݨϥΪ̫����~��
    return 0;
}

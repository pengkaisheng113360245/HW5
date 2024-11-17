#include <stdio.h>

// ���j�禡�G�M��}�C�����̤j��
int recursiveMaximum(const int array[], int size) {
    if (size == 1) { // �p�G�}�C�u���@�Ӥ���
        return array[0];
    }

    int max = recursiveMaximum(array, size - 1); // ���j�B�z�Ѿl���}�C
    return (array[size - 1] > max) ? array[size - 1] : max; // ����̫�@�Ӥ����P�̤j��
}

int main(void) {
    int myArray[] = { 1, 5, 3, 9, 2, 8 };
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int max = recursiveMaximum(myArray, size); // �I�s���j�禡
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}

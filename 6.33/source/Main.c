#include <stdio.h>

// �禡�ŧi
int binarySearch(int array[], int low, int high, int key);

int main(void) {
    int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; // �w�ƧǪ��}�C
    int size = sizeof(arr) / sizeof(arr[0]);          // �}�C�j�p
    int key = 10;                                     // �n�j�M����
    int result;

    // �I�s�G���j�M�禡
    result = binarySearch(arr, 0, size - 1, key);

    // ��ܷj�M���G
    if (result != -1) {
        printf("The key %d is found at index %d.\n", key, result);
    }
    else {
        printf("The key %d is not found in the array.\n", key);
    }

    return 0;
}

// �G���j�M�禡�]���j�^
int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; // �j�M�d��L�ġA��ܥ����
    }

    int mid = (low + high) / 2; // �p�⤤������

    if (array[mid] == key) {
        return mid; // ���ؼЭȡA�^�ǯ���
    }
    else if (array[mid] > key) {
        return binarySearch(array, low, mid - 1, key); // �j�M���b��
    }
    else {
        return binarySearch(array, mid + 1, high, key); // �j�M�k�b��
    }
}

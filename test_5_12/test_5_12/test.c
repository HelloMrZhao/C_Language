#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ص������İ���
//qsort��һ���⺯��
//���ڿ��������㷨ʵ�ֵ�һ������ĺ���

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


//qsort�����Խṹ������
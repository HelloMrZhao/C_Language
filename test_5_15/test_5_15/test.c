#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//冒泡排序的升级,可以排序整型，结构体，字符串


#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("原始数组：");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("");

        bubble_sort(arr, n);

    printf("排序后的数组：");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("");

        return 0;
}



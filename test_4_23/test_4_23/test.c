#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//дһ�������ж�����n�ǲ���2���ݴη�

#include <stdio.h>
#include <stdbool.h>

bool is_power_of_two(int n) {
    if (n <= 0) {
        return false;
    }
    // �ж��Ƿ�ֻ��һλΪ1
    return (n & (n - 1)) == 0;
}

int main() {
    int n;
    printf("������һ������n��");
    scanf("%d", &n);
    if (is_power_of_two(n)) {
        printf("%d��2���ݴη�\n", n);
    }
    else {
        printf("%d����2���ݴη�\n", n);
    }
    return 0;
}
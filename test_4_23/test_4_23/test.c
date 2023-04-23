#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//写一个代码判断整数n是不是2的幂次方

#include <stdio.h>
#include <stdbool.h>

bool is_power_of_two(int n) {
    if (n <= 0) {
        return false;
    }
    // 判断是否只有一位为1
    return (n & (n - 1)) == 0;
}

int main() {
    int n;
    printf("请输入一个整数n：");
    scanf("%d", &n);
    if (is_power_of_two(n)) {
        printf("%d是2的幂次方\n", n);
    }
    else {
        printf("%d不是2的幂次方\n", n);
    }
    return 0;
}
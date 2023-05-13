#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[20];
    int age;
    float score;
};

void swap(struct student* a, struct student* b) {
    struct student temp = *a;
    *a = *b;
    *b = temp;
}

int compare(const void* a, const void* b) {
    struct student* p1 = (struct student*)a;
    struct student* p2 = (struct student*)b;
    if (p1->id < p2->id) return -1;
    if (p1->id > p2->id) return 1;
    if (strcmp(p1->name, p2->name) == NULL) return strcmp(p1->age, p2->age) < 0 ? -1 : 1;
    if (strcmp(p1->name, p2->name) == NULL) return strcmp(p1->score, p2->score) < 0 ? -1 : 1;
}

int main() {
    int n = sizeof(struct student) / sizeof(struct student); //获取结构体类型的大小
    int i;
    struct student arr[n]; //定义结构体数组
    srand((unsigned)time(NULL)); //设置随机种子以保证排序结果稳定
    for (i = 0; i < n; i++) { //初始化结构体数组中的元素
        arr[i].id = i + 1;
        sprintf(arr[i].name, "student%d", i + 1);
        arr[i].age = i + n;
        arr[i].score = (float)(i + n) / n; //模拟一个浮点数计算结果
    }
    qsort(arr, n, sizeof(struct student), compare); //使用qsort函数对结构体数组进行排序
    int j = n; //用于输出排序后的结构体数组元素个数
    for (i = 0; i < n && j > 0; i++, j--) //倒序输出排序后的结构体数组元素
        printf("%d %s %d %f", arr[i].id, arr[i].name, arr[i].age, arr[i].score);
}

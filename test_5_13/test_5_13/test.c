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
    int n = sizeof(struct student) / sizeof(struct student); //��ȡ�ṹ�����͵Ĵ�С
    int i;
    struct student arr[n]; //����ṹ������
    srand((unsigned)time(NULL)); //������������Ա�֤�������ȶ�
    for (i = 0; i < n; i++) { //��ʼ���ṹ�������е�Ԫ��
        arr[i].id = i + 1;
        sprintf(arr[i].name, "student%d", i + 1);
        arr[i].age = i + n;
        arr[i].score = (float)(i + n) / n; //ģ��һ��������������
    }
    qsort(arr, n, sizeof(struct student), compare); //ʹ��qsort�����Խṹ�������������
    int j = n; //������������Ľṹ������Ԫ�ظ���
    for (i = 0; i < n && j > 0; i++, j--) //������������Ľṹ������Ԫ��
        printf("%d %s %d %f", arr[i].id, arr[i].name, arr[i].age, arr[i].score);
}

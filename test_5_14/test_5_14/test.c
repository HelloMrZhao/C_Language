#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//qsort函数整型排序练习

//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* el, const void* e2));//函数指针
//
//void qsort(void* base, size_t num, size_t width, int(__cdecl* compare)(const void* elem1, const void* elem2));



//#include <stdlib.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_int(const void* elem1, const void* elem2)
//{
//	return (*(int*)elem2 - *(int*)elem1); //排序为降序
//}
//
//void test1()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//qsort函数整型排序练习
//#include <stdlib.h>
//int cmp_int(const void* elem1, const void* elem2)
//{
//	return (*(int*)elem2 - *(int*)elem1);
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test1()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print(arr, sz);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//void qsort(void* base, size_t num, size_t width, int(_cdecl* compare)(const void* elem1, const void* elem2));

//void qsort(void* base, size_t num, size_t width, int(_cdecl* compare)(const void* elem1, const void* elem2));

//void qsort(void*base, size_t num, size_t width, int(_cdecl* compare)(const void*elem1,const void*elem2));

//void qsort(void* base, size_t num, size_t width, int(_cdecl* compare)(const void* elem1, const void* elem2));



//qsort函数结构体排序练习
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
struct Stu
{
	char name[20];
	int age;
	double score;
};

int com_stu_by_age(const void* elem1, const void* elem2)
{
	return ((struct  Stu*)elem1)->age - ((struct Stu*)elem2)->age;
}
 
int com_stu_by_name(const void* elem1, const void* elem2)
{
	return strcmp(((struct  Stu*)elem1)->name , ((struct Stu*)elem2)->name);//stringcmpare是按照字典的顺序来比较的,两个字符在比较的时候，比较的是它的ascll码值

}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test1()
{
	struct  Stu arr[3] = { {"zhangsan",25,80.0},{"lisi",35,88.0},{"wangwu",22,96.0} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), com_stu_by_age);
	qsort(arr, sz, sizeof(arr[0]), com_stu_by_name);

	//print(arr, sz);
}

int main()
{
	test1();
	return 0;
}

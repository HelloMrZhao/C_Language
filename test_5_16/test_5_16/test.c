#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//√∞≈›≈≈–Ú–ﬁ∏ƒ

//void qsort(void*base,size_t num, size_t with, int(*cmp)(const void*e1,const void*e2))

//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));

//√∞≈›≈≈–Ú’˚–Õ
//int cmp(const void* elem1, const void* elem2)
//{
//	return (*(int*)elem1 - *(int*)elem2);
//}
//void Swap(char*buf1, char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void*base, int num, int width, int(*cmp)( const void*elem1, const void*elem2 ))
//{
//	//º∆À„––
//	int i = 0;
//	for (i = 0; i <num - 1; i++)  //º∆À„√∞≈›≈≈–ÚµƒÃÀ ˝
//	{
//		//º∆À„¡–
//		int j = 0;
//		for (j = 0; j < num-1-i; j++)
//		{
//			//≈≈–ÚŒ™Ωµ–Ú
//			//if (arr[j] < arr[j + 1])
//			if(cmp((char*)base + j*width, (char*)base + (j+1)*width)>0)
//			{
//				//Ωªªª
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}    
//		
//	}
//}
//
//void print_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test2()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	//≈≈–ÚŒ™…˝–Ú
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
//	print_sort(arr, sz);
//
//} 
//
//int main()
//{
//	test2();
//	return 0;
//}



//√∞≈›≈≈–ÚΩ·ππÃÂ
#include <string.h>
struct Stu
{
	char name[20];
	int age;
	double score;
};

int cmp(const void* elem1, const void* elem2)
{
	return (*(int*)elem1 - *(int*)elem2);
}

int cmp_stu_by_name(const void* elem1, const void* elem2)
{
	return strcmp(((struct Stu*)elem1)->name , ((struct Stu*)elem2)->name);
}
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int num, int width, int(*cmp)(const void* elem1, const void* elem2))
{
	//º∆À„––
	int i = 0;
	for (i = 0; i < num - 1; i++)  //º∆À„√∞≈›≈≈–ÚµƒÃÀ ˝
	{
		//º∆À„¡–
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//≈≈–ÚŒ™Ωµ–Ú
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//Ωªªª
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void test2()
{
	struct Stu arr[3] = { {"zhangsan",20,55.5},{"lisi",30,88.0},{"wangwu",10,90.0}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);

}

int main()
{
	test2();
	return 0;
}
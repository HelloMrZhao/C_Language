#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

////字符转换
////int tolower(int c);
////int toupper(int c);  
//int main()
//{
//	char ch = 'A';
//
//	putchar(toupper(ch));
//	putchar(tolower(ch));
//	return 0;
//}



//void* memcpy(void* dest, const void* src, size_t count);

#include <string.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//
//	return ret;
//}


void* my_memmove(void* dest, const void*src, size_t count)
{
	assert(dest && src);
	void* ret = dest;
	//1
	if (dest < src )
	{
		//后->前
		while(count--)
		{
			*(char*)dest = *(char*)(src);
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//前->后
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int arr2[5] = { 0 };

   // my_memcpy(arr2, arr1, 20);//1 2 1 2 3 4 5 8 9 10
	//my_memcpy(arr1 + 2, arr1, 20);//1 2 1 2 1 2 1 8 9 10

	//memmove(arr1+2, arr1, 20);//可以实现重叠内存的拷贝,1 3 4 5 6 7 6 7 8 9 10

	my_memmove(arr1, arr1+2, 20);//可以实现重叠内存的拷贝,1 2 1 2 3 4 5 8 9 10
	//my_memmove(arr1+2, arr1, 20);//可以实现重叠内存的拷贝,1 2 1 2 3 4 5 8 9 10


	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}

	// memcpy(arr1 , arr2, 20);

	return 0;
}
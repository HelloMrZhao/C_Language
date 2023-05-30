#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//字符函数和字符串函数
//int main()
//{
	//'a';//c语言中单引号引起来的叫字符
	//char ch = 'a';//字符类型叫char ch
	//"abcdef";//双引号引起来的就叫做字符串，但是C语言没有字符串类型，但是C语言提供了一系列的可以操作字符串和字符函数的相关函数
	//char arr[10] = { 'a','b','c','d','e','f' };//6
	//char arr[7] = { 'a','b','c','d','e','f' };//6,给了数组十个空间但是只有6个字符，所以6个字符都初始化，其余的空间默认为0，系统里0就表示\0


	//char arr[] = { 'a','b','c','d','e','f', '\0'};//6
	//int len = strlen(arr);//string length
	//printf("%d\n", len);

	//if ((int)strlen("abc") - (int)strlen("qwerty") > 0)	//strlen返回的是无符号的数,所以需要强制转换为int
	//{
	//	printf(">\n");
	//}
	//else
	//{
	//	printf("<=\n");//<=
	//}


	//if (strlen("abc") - strlen("qwerty") > 0)	//strlen返回的是无符号的数
	//{
	//	printf(">\n");//>
	//}
	//else
	//{
	//	printf("<=\n");
	//}

	//if (strlen("abc") > strlen("qwerty") )	//strlen返回的是无符号的数
	//{
	//	printf(">\n");
	//}
	//else
	//{
	//	printf("<=\n"); //<=
	//}
	//return 0;
//}

//#include <assert.h>
//size_t my_strlen(const char* str)
//{
//	int num = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		num += 1;
//		str++;
//	}
//	return num;
//}
////2.递归的方法
////3. 指针-指针的方法
//
//int main()
//{
//	char arr[] = "abcedf";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//1.2strcpy -  字符串拷贝
///char* strcpy(char * destination, const char* source)

//源字符串必须以 '\0' 结束。
//会将源字符串中的 '\0' 拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。
//目标空间必须可变。
//学会模拟实现
//int main()
//{
//	//char arr1[20] = { 0 };
//	//源字符串必须以 '\0' 结束。
//
//	//char arr2[] = "abcedf";
//	//char arr2[] = { 'a','b','c','d','e' ,'\0'};
//	//char arr2[10] = { 'a','b','c','d','e' ,'\0' };
//
//
//	////会将源字符串中的 '\0' 拷贝到目标空间。
//	//char arr1[20] = { "xxxxxxxxxx"};
//	//char arr2[] = "abcedf";
//
//
////目标空间必须足够大，以确保能存放源字符串。
//	//char arr1[4] = { 0 };//err空间太小 
//	//char arr2[] = "abcedf";
//
//
//	//目标空间必须可变
//	char arr1 = "fristword";//err
//	char arr2[] = "abcedf";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//strcpy函数返回的是目标空间的起始地址
//strcpy函数的返回类型的设置是为了实现链式访问
//#include <assert.h>
////strcpy返回类型是char*
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//assert(str1 && str2);
//	//while (*str2 != '\0')
//	//{
//	//	//int tmp = *str2;
//	//	*str1 = *str2;
//	//	str1++;
//	//	str2++;
//	//}
//	//*str1 = *str2;//拷贝\0
//
//
//
//	//方法二：
//	char* ret = str1;//保存目标空间的起始地址,ret是一个变量，char*是ret的类型
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//
//int main()
//{
//	char arr1[] = "xxxxxxxxx";
//	char arr2[] = "abcedf";
//	//my_strcpy(arr1,arr2);
//	//printf("%s", arr1);
//	printf("%s", my_strcpy(arr1, arr2));
//
//	return 0;
//}

//#include <assert.h>
//char* my_strcat(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//char arr1[20] = "helloxxxx\0xxx";
//	//char arr1[] = { 'h','e','l','l','o'};
//	char arr1[20] = "hello";//要确保目标字符串的空间足够大
//	char arr2[] = "  bit";
//
//	
//
//	//strcat(arr1, arr2);//追加，是从\0开始追加
//	printf("%s\n", my_strcat(arr1, arr2));//实现链式访问
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);//-1,相等输出0，arr1>arr2输出大于0
//	//strcmp比较的不是字符串的长度
//	//而是比较字符串中对应位置上的字符的大小，如果相同，就比较下一对，直到不同或者都遇到\0
//
//	return 0;
//}

#include <assert.h>
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;//相等
		}

		s1++;
		s2++;
	}

	if (*s1 > *s2)
		return 1;
	else
		return -1;
}


int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abq";

	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);//-1,相等输出0，arr1>arr2输出大于0
	//strcmp比较的不是字符串的长度
	//而是比较字符串中对应位置上的字符的大小，如果相同，就比较下一对，直到不同或者都遇到\0

	return 0;
}

//strcpy
//strcat
//strcmp
//长度不受限制的字符串函数，存在一定的风险，在拷贝前需要确保将要拷贝的地方有足够的空间
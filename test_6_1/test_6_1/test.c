#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//strstr
//功能是在一个字符串中找另外一个字符串，看一个字符串是不是另外一个字符串的字串

char* strsr(const char* str1, const char* str2);//看str2是不是str1的字串，判断str2有没有在str1里面，如果有那么str2就是str1的字串
//str2如果在str1中出现了，它会返回在str1里面第一次出现的位置的地址，如果没有出现，那么返回空指针，也就是返回一个地址
//int main() 
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "cdef";
//	strstr(arr1, arr2);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没有出现\n");
//	}
//	else 
//	{
//	    printf("找到了,在arr1中第一次出现的地址是：%p\n", ret); 
//		printf("%s\n", ret);
//	}
//	return 0;
//}


#include <assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* s1 = str1;
	char* s2 = str2;

	char* cur = str1;
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;//找不到
}


int main()
{
	char arr1[] = "abbbbcdeqabcdef";
	char arr2[] = "bbc";
	//strstr(arr1, arr2);
	char* ret = my_strstr(arr1, arr2);
	if (NULL == ret)
	{
		printf("没有出现\n");
	}
	else
	{
		//printf("找到了,在arr1中第一次出现的地址是：%p\n", ret);
		printf("%s\n", ret);
	}
	return 0;
}
//查找字串还可以用KMP算法 - 比特大博哥
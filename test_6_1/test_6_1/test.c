#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//strstr
//��������һ���ַ�����������һ���ַ�������һ���ַ����ǲ�������һ���ַ������ִ�

char* strsr(const char* str1, const char* str2);//��str2�ǲ���str1���ִ����ж�str2��û����str1���棬�������ôstr2����str1���ִ�
//str2�����str1�г����ˣ����᷵����str1�����һ�γ��ֵ�λ�õĵ�ַ�����û�г��֣���ô���ؿ�ָ�룬Ҳ���Ƿ���һ����ַ
//int main() 
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "cdef";
//	strstr(arr1, arr2);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�г���\n");
//	}
//	else 
//	{
//	    printf("�ҵ���,��arr1�е�һ�γ��ֵĵ�ַ�ǣ�%p\n", ret); 
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
	return NULL;//�Ҳ���
}


int main()
{
	char arr1[] = "abbbbcdeqabcdef";
	char arr2[] = "bbc";
	//strstr(arr1, arr2);
	char* ret = my_strstr(arr1, arr2);
	if (NULL == ret)
	{
		printf("û�г���\n");
	}
	else
	{
		//printf("�ҵ���,��arr1�е�һ�γ��ֵĵ�ַ�ǣ�%p\n", ret);
		printf("%s\n", ret);
	}
	return 0;
}
//�����ִ���������KMP�㷨 - ���ش󲩸�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ַ��������ַ�������
//int main()
//{
	//'a';//c�����е������������Ľ��ַ�
	//char ch = 'a';//�ַ����ͽ�char ch
	//"abcdef";//˫�����������ľͽ����ַ���������C����û���ַ������ͣ�����C�����ṩ��һϵ�еĿ��Բ����ַ������ַ���������غ���
	//char arr[10] = { 'a','b','c','d','e','f' };//6
	//char arr[7] = { 'a','b','c','d','e','f' };//6,��������ʮ���ռ䵫��ֻ��6���ַ�������6���ַ�����ʼ��������Ŀռ�Ĭ��Ϊ0��ϵͳ��0�ͱ�ʾ\0


	//char arr[] = { 'a','b','c','d','e','f', '\0'};//6
	//int len = strlen(arr);//string length
	//printf("%d\n", len);

	//if ((int)strlen("abc") - (int)strlen("qwerty") > 0)	//strlen���ص����޷��ŵ���,������Ҫǿ��ת��Ϊint
	//{
	//	printf(">\n");
	//}
	//else
	//{
	//	printf("<=\n");//<=
	//}


	//if (strlen("abc") - strlen("qwerty") > 0)	//strlen���ص����޷��ŵ���
	//{
	//	printf(">\n");//>
	//}
	//else
	//{
	//	printf("<=\n");
	//}

	//if (strlen("abc") > strlen("qwerty") )	//strlen���ص����޷��ŵ���
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
////2.�ݹ�ķ���
////3. ָ��-ָ��ķ���
//
//int main()
//{
//	char arr[] = "abcedf";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//1.2strcpy -  �ַ�������
///char* strcpy(char * destination, const char* source)

//Դ�ַ��������� '\0' ������
//�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ䡣
//ѧ��ģ��ʵ��
//int main()
//{
//	//char arr1[20] = { 0 };
//	//Դ�ַ��������� '\0' ������
//
//	//char arr2[] = "abcedf";
//	//char arr2[] = { 'a','b','c','d','e' ,'\0'};
//	//char arr2[10] = { 'a','b','c','d','e' ,'\0' };
//
//
//	////�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
//	//char arr1[20] = { "xxxxxxxxxx"};
//	//char arr2[] = "abcedf";
//
//
////Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//	//char arr1[4] = { 0 };//err�ռ�̫С 
//	//char arr2[] = "abcedf";
//
//
//	//Ŀ��ռ����ɱ�
//	char arr1 = "fristword";//err
//	char arr2[] = "abcedf";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//strcpy�������ص���Ŀ��ռ����ʼ��ַ
//strcpy�����ķ������͵�������Ϊ��ʵ����ʽ����
//#include <assert.h>
////strcpy����������char*
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
//	//*str1 = *str2;//����\0
//
//
//
//	//��������
//	char* ret = str1;//����Ŀ��ռ����ʼ��ַ,ret��һ��������char*��ret������
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
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
//	//����
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
//	char arr1[20] = "hello";//Ҫȷ��Ŀ���ַ����Ŀռ��㹻��
//	char arr2[] = "  bit";
//
//	
//
//	//strcat(arr1, arr2);//׷�ӣ��Ǵ�\0��ʼ׷��
//	printf("%s\n", my_strcat(arr1, arr2));//ʵ����ʽ����
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);//-1,������0��arr1>arr2�������0
//	//strcmp�ȽϵĲ����ַ����ĳ���
//	//���ǱȽ��ַ����ж�Ӧλ���ϵ��ַ��Ĵ�С�������ͬ���ͱȽ���һ�ԣ�ֱ����ͬ���߶�����\0
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
			return 0;//���
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
	printf("%d\n", ret);//-1,������0��arr1>arr2�������0
	//strcmp�ȽϵĲ����ַ����ĳ���
	//���ǱȽ��ַ����ж�Ӧλ���ϵ��ַ��Ĵ�С�������ͬ���ͱȽ���һ�ԣ�ֱ����ͬ���߶�����\0

	return 0;
}

//strcpy
//strcat
//strcmp
//���Ȳ������Ƶ��ַ�������������һ���ķ��գ��ڿ���ǰ��Ҫȷ����Ҫ�����ĵط����㹻�Ŀռ�
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�ַ���+ת���ַ�+ע��:

//�ַ�������һ���ַ� - ��˫������������һ���ַ�,�ַ����Ľ�����־��\0��ת���ַ�

//int main()
//{
//	"abcdef";
//	"HelloMrZhao";
//	return 0;
//}

#include <string.h>
//int main()
//{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β��λ��������һ��\0���ַ�
	//\0���ַ����Ľ�����־
	//char arr[] = "hello";
	//char arr1[] = "abc";
	//char arr2[] = {'a','b','c'};
	//char arr2[] = { 'a','b','c','\0' };


	 
	//��һ���ַ����ĳ���
	//������Ԫ�ظ�����ʱ����\0�������ַ�����ʱ����\0
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	//�ַ����Ľ�����־��\0�����ڼ������ĳ���ʱ�ǲ���������
	//int len = strlen("abc");//string length,���ַ�������
	//printf("%d\n", len);//��ӡ�����3������ʾ��strlen��δ���壬��ʾstrlenû������ͷ�ļ�#include <string.h>
	//��ӡ�ַ���
	//printf("%s\n", arr1); //abc\0
	//printf("%s\n", arr2 ); //abc  ????

//	return 0;
//}

//ת���ַ� - ת������ԭ�е���˼
//int main()
//{
//	// \t
//	//printf("c:\test\test.c");
//	// \n
//	printf("ab\ncd");
//	return 0;
//}

int main()
{
	printf("(are you ok??)");//??) -- ] - ����ĸ��
	//(are you ok]
	//����İ취���Ǹ��ʺ�ǰ��б�����磺printf("(are you ok\?\?)");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <malloc.h>
//strerror
///char* strerror(int errnum);
//���ش����룬����Ӧ�Ĵ�����Ϣ

//ȫ�ֱ�����errno(�����룩

//0 1 2 3 4 ....
//
//404
//


//int main()
//{
//	//printf("%s\n", strerror(0));//No error
//	//printf("%s\n", strerror(1));//Operation not permitted
//	//printf("%s\n", strerror(2));//No such file or directory
//	//printf("%s\n", strerror(3));//No such process
//
//
//	int * p = (int*)malloc(40);//����������ڴ�
//	if (p == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("hh");
//
//		perror("malloc");
//		return 1;
//	}
//
//	return 0;
//} 




//�ַ����ຯ����

//����                  ������Ĳ����������������ͷ�����
//iscntrl              �κο����ַ�
//isspace              �հ��ַ����ո�'',��ҳ��\f��,����'\n',�س�'\r',�Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit              ʮ��������0~9
//isxdigit              ʮ���������֣���������ʮ�������֣�Сд��ĸa~f,��д��ĸA~F
//islower               Сд��ĸa~z,��Сд��ĸ�ͷ��ط�0��������Ǿͷ���0
//isupper               ��д��ĸA~Z
//isalpha               ��ĸa~z��A~Z
//isalnum               ��ĸ�������֣�a~z,A~Z,0~9
//ispunct               ��Ƿ��ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
 

#include <ctype.h>
int main()
{
	//int ret = isdigit('5');
	//printf("%d\n", ret);//4,isdigit('5')��������һ�����ͷ���һ����0����


	//�жϴ�Сд
	char ch = 'b';
	/*if (ch >= 'a' && ch <= 'z')
	{

	}*/

	//int ret = islower(ch);
	int ret = isalnum(ch);


	printf("%d\n", ret);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//strtok
//char * strtok ( char * str, const char * sep );
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣

#include <string.h>
int main()
{
	char arr[] = "zhaochenlu@yeah.hh?aa.ne t";
	//strtok
	//"@."
	char buf[40] = { 0 };
	strcpy(buf, arr);

	const char* sep = "@.? ";
	char* str = NULL;
	for (str = strtok(buf, sep); str!= NULL; str = strtok(NULL, sep))
	{
		printf("%s\n", str);
	}

	//printf("%s\n", strtok(buf, sep));//ֻ�ҵ�һ�����
	//printf("%s\n", strtok(NULL, sep));//�Ǵӱ���õ�λ�ÿ�ʼ����������
	//printf("%s\n", strtok(NULL, sep));//�Ǵӱ���õ�λ�ÿ�ʼ����������

	return 0;
}
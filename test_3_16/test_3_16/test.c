#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//������ʹ��goto���
//����ĳ�ֳ�����goto��仹���õ��ŵģ�������÷���������ֹ������ĳЩ���Ƕ�׵Ľṹ������̣�����һ�������������ѭ����
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0; 
//}

//goto���������ʺϵĳ������£�
 //for(...)
	// for (...)
	// {
	//	 for (...)
	//	 {
	//		 if (disaster)
	//			 goto error;
	//	 }
	// }
 //...
	// error:
 //if (disaster)
	// // ����������


//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ�
//shutdown -s -t 60;-s����ƹػ���-t�����ʱ��ػ���60�ǹػ������룻
//shutdown -a//ȡ���ػ�

//�ٶ���ΰ�һ����ִ�г�����ӵ���������ȥ
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	//�ػ�
//	//c�����ṩ��һ��������system()-ִ��ϵͳ�����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s",input);
//	//strcmp(input)
//	//if (input == "������")//�����ַ����Ƚϲ���ʹ��==�ģ�Ӧ��ʹ��strcmp()���� string compare
//	if (strcmp(input,"������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


////goto ���ֻ����һ��������Χ ����ת�����ܿ纯��,���磺
//
//void test()
//{
//flag:
//	printf("test\n");
//}
//int main()
//{
//	goto flag;
//	return 0;
//}


//�Բ⣺
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("ע�⣡��ĵ��Խ���60���ڹػ���������룺���������Խ�ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp("������",input) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}
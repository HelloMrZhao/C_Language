#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//4.��д���룬��ʾ����ַ��������ƶ������м���
#include <string.h> //strlen()�������ַ������ȵ�ͷ�ļ�
#include <windows.h>//Sleep();���ߺ�����ͷ�ļ�
#include <stdlib.h> //system("cls")����������ͷ�ļ�
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//sizeof��C�����е�һ����Ŀ�������������������������ռ�ռ�Ĵ�С����λΪ�ֽڣ�
//	//��strlen��һ�����������������ַ�������
//	while (left < right)
//	{	
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(500); //Sleep()��һ�����ߺ�����1000����=1��
//		system("cls"); //�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//ֻ���������������룬���������ȷ����ʾ��¼�ɹ���
//������ξ�����������˳�����
//int main()
//{
//	int passward = 123456;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		printf("���������룺");
//		scanf("%d", &b);
//		if (b == passward )
//		{
//			printf("��½�ɹ�!");
//			break;
//		}
//		else
//		{
//			printf("��¼ʧ��!\n");
//			Sleep(1000);
//		}	
//	}
//		if (i == 4)
//		{
//			printf("�˳���¼");
//		}
//		
//	return 0;
//}

#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 1; i < 4; i++)
	{
		printf("���������룺");
		scanf("%s", password);//ӦΪpassword�Ǹ����飬�������������ǵ�ַ�����Բ�Ҫ��&ȡ��ַ
		//if(password == "123456")//err - �����ַ����Ƚϣ�������==��Ӧ��ʹ��strcmp
		if (strcmp(password,"123456") == 0) //strcmp�����ַ����ȽϺ�������"123456"��passwordͬʱ����strcmp��Ȼ��strcmp�ͻ�Ƚ��������������������Ⱦ�˵���������Ȼ��ͷ���0
			//strcmp���������Ƚϵ��������ַ�����Ӧλ���ϵ�ASCLL��ֵ
		{
			printf("��½�ɹ�!");
			break;
		}
		else
		{
			printf("��¼ʧ��!\n");
		
		}	
	}
	if (i == 4)
	{
		printf("�˳���¼");
	}
				
	return 0;
}



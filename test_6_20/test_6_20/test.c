#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////2. λ��
////�ṹ�彲��͵ý����ṹ��ʵ�� λ�� ��������
////2.1 ʲô��λ��
////λ�ε������ͽṹ�����Ƶģ���������ͬ��
////1.λ�εĳ�Ա������ int��unsigned int ��signed int ��
////2.λ�εĳ�Ա�������һ��ð�ź�һ�����֡�
//
//
//struct AA
//{
//	int _a;//INT_MAX ~ INT_MIN
//	int _b;
//	int _c;
//	int _d;
//};
//
//
//struct A
//{
//	int _a : 2;//_a�����Աֻռ2��bitλ
//	int _b : 5;//_b�����Աֻռ5��bitλ
//	int _c : 10;
//	int _d : 30;
//};//8
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct AA));
//
//	return 0;
//}  

//2.2 λ�ε��ڴ����
//1. λ�εĳ�Ա������ int unsigned int signed int ������ //char ���������μ��壩����
//2. λ�εĿռ����ǰ�����Ҫ��4���ֽڣ� int ������1���ֽڣ� //char ���ķ�ʽ�����ٵġ�
//3. λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�



//ö��
//ö�ٸ����ڵ���
//��ֹ����������Ⱦ����װ��
//���ڲ���
// ʹ�÷��㣬һ�ο��Զ��������� 
//enum Color
//{
//	RED = 5,
//	GREEN = 8,
//	BLUE
//};
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//
//};
//
//enum Color
//{
//	RED = 5,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	printf("%d\n", RED);//0 //5
//	printf("%d\n", GREEN);//1
//	printf("%d\n", BLUE);//2
//
//	enum Sex s = MALE;
//	enum Sex s2 = FEMALE;
//	enum Day d = Fri;
//	enum Color c = GREEN;
//
//	return 0;
//}

//test.c ---> Ԥ����--->����--->���--->����--->test.exe
//#define������ŵ��滻

//���ϣ������壩
//�������͵Ķ���
//����Ҳ��һ��������Զ�������
//�������Ͷ���ı���Ҳ����һϵ�еĳ�Ա����������Щ��Ա����ͬһ��ռ䣨��������Ҳ�й����壩��
//���磺


//�ṹ��Ĺؼ��֣�struct
//���ϵĹؼ��֣�enum
//�����壨�����壩�Ĺؼ��֣�union

//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()    
//{
//	union Un u;
//	u.c = 0x55;
//	u.i = 0;
//
//	printf("%d\n",sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

//���ϵ��ص�
//���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С����Ϊ�������ٵ����������������Ǹ���Ա����
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//
//}
//
//int main()
//{
//	if (1 == check_sys())
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	
//	//int i = 1;
//	////01 00 00 00
//	//if(1 == *(char*)&i)
//	//{
//	//	printf("С��\n");
//	//}
//	//else
//	//{
//	//	printf("���\n");
//	//}
//	return 0;
//}


union Un
{
	char arr[5];//5
	int i;//4
};


union Yn 
{
    short arr[7];//14 2
	int i;//4  4
};

//����������ô�С��һ�����ڲ�����Ա�Ĵ�С
//������ô�С������������Ա�Ĵ�С
//������Ա��С������������������ʱ�򣬾�Ҫ���뵽���������ñ���
//���磺

int main()
{
	printf("%d\n", sizeof(union Un));//�����8����Ϊ���ڶ���
	printf("%d\n", sizeof(union Yn));//�����16����Ϊ���ڶ���

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//-�Զ������ͣ��ṹ�壬ö�٣�����	
//�ṹ��
//�ṹ�����͵�����
//�ṹ��������
//�ṹ������Ķ���ͳ�ʼ��
//�ṹ���ڴ����
//�ṹ�崫��
//�ṹ��ʵ��λ�Σ�λ�ε����& ����ֲ�ԣ�
//ö��
//ö�����͵Ķ���
//ö�ٵ��ŵ�
//ö�ٵ�ʹ��
//����
//�������͵Ķ���
//���ϵ��ص�
//���ϴ�С�ļ���


//�ṹ��
//1 �ṹ�������
//1.1 �ṹ�Ļ���֪ʶ
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�/ͬ/���͵ı�����
//1.2 �ṹ������

//struct tag//tag�ǽṹ���ǩ    
//{
//	 member - list;//��Ա�б�
//
//}variable - list;//�����б�

//struct Stu //Stu�ṹ���ǩ
//{
//	char name[20]; //�ṹ���Ա
//	int age;
//	double score;
//
//}s1,s2,s3;//�����б������б����ʡ�Բ�д
//
////struct Stu s1;//����ֱ����������ȫ�ֱ���
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[12];
//};
//
//int main()
//{
//	struct Book b1;
//	struct Stu s2, s3;
//
//	return 0;
//}

//���������
//�������ṹ���ʱ�򣬿��Բ���ȫ����

//���磺
//�����ṹ������
//�����ṹ��ֻ����һ��
//�����ṹ��ĳ�Ա���һ�����ڱ�������Ҳ�ǲ�ͬ���͵Ľṹ��
//struct
//{
//	char name[20];
//	char id[12];
//
//}ss;//�������ṹ�����ʹ��������������ss


//�ṹ��������
//�ڽṹ�а���һ������Ϊ�ýṹ����ĳ�Ա�Ƿ�����أ�


//����һ������Ľṹ��
//struct Node
//{
//	int data;//����
//	struct Node*next;//ָ��
//};
//
//int main()
//{
//	struct Node n;
//
//	return 0;
//}



//typedef //����������
//typedef struct Node
//{
//	int data;//����
//	struct Node* next;//ָ��
//}Node;//�������ṹ��������ΪNode,������ʹ�õ�ʱ��Ϳ���ʡ��struct��д,�����Node���൱��struct Node
//
//typedef struct Node
//{
//	int data;//����
//	struct Node* next;//������ṹ��ָ������������pNode
//}Node, * pNode; //pNode --> struct Node*
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//} 


//�ṹ������Ķ���ͳ�ʼ��

struct Book
{
	char name[20];
	float price;
	char id[12];
}s = {"���μ�",55.5f,"XYJ001"};//�����Ȿ��S�Ķ���,�ڶ���Ĺ����н��г�ʼ��



//�ṹ��Ƕ��
struct Node
{
	struct Book b;
	struct Node* nexrt;
};
int main()
{
	struct Book s2 = { "��������",66.6f,"SGYY001" };
	struct Node n = { {"ˮ䰴�",66.8,"SHZ001"}, NULL };//Ƕ�����͵ĳ�ʼ��

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//1.��ʶ�ṹ��
//1>�ṹ�����͵�����
//2>�ṹ��ĳ�ʼ��
//3>�ṹ���Ա����
//4>�ṹ�崫��
//����һ�����Ӷ����ʱ�����Ҫ�����ṹ�壬��������һ��ѧ���������Ϣ
//int main()
//{
//
//	return 0;
//}

//1>�ṹ�������
//1.1�ṹ�Ļ���֪ʶ
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����
//1.2�ṹ������
//struct tag
//{
//	member-list;
//
//}; variable-list;
//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[8];//�Ա�
//	float score;
//}s1,s2,s3;//s1,s2,s3�� ͨ��struct Stu���ʹ����ı���������ı�������дһ��������д�����Ҳ���Բ�д
////��ʱ������s1,s2,s3��ȫ�ֱ���
//
//int main()
//{
//	//������struct Stu�ṹ��󣬻�����ֱ����main�����д����ṹ�����d4,s5
//	//struct Stu ���ǽṹ�����ͣ��������ʡ��struct
//	struct Stu s4;
//	struct Stu s5;
//	//�����s4,s5�Ǿֲ�����
//	return 0;
//}

//�����Ҫʡ��struct����Ҫ�õ�typedef--�����ض���/������ 
//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[8];//�Ա�
//	float score;
//}s1, s2, s3;//s1,s2,s3�� ͨ��struct Stu���ʹ����ı���������ı�������дһ��������д�����Ҳ���Բ�д
////��ʱ������s1,s2,s3��ȫ�ֱ���
//
//typedef struct Stu Stu;
//
//int main()
//{
//	Stu s6;
//	//�����s6�Ǿֲ�����
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[8];//�Ա�
//	float score;//����
//}Stu;//�����Stu�Ͳ��Ǳ����б��ˣ�Stu��������͵�������
//
//int main()
//{
//	Stu s6;
//	//�����s6�Ǿֲ�����
//	return 0;
//}
//1.3�ṹ��Ա������
// �ṹ��ĳ�Ա�����Ǳ��������顢ָ�룬���������ṹ�塣
//������ֱͨ�۵ı��������磺int age��float score���Ǳ���

//1.4�ṹ������Ķ���ͳ�ʼ��
//����һ������
//struct Point //��������
//{
//	int x;
//	int y;
//}p1 = { 10,15 };//������p1��ʼ��10�У�15��,��ʼ��Ҫ�ô�����{}
//
//struct S 
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//
////�ṹ���е�Ҳ������ָ�룬ָ���ڳ��Ի���ʱ������ŵ�ַ���У������֪������ô��ַ�ͷ����ָ�����NULL������
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10,{4,5},NULL };
//
//int main()
//{
//	struct Point p = { 100 ,200 };
//	struct S ss = { 'w',{100,20},5.5,"hello" }; //�Ը��ӽṹ�����Ƕ�׳�ʼ��
//	struct Node n2 = { 20,{5,6},NULL };//�ṹ��Ƕ�׳�ʼ��
//	return 0;
//}

//3>�ṹ���Ա����
//ʹ�ýṹ��Ա������
//.   �ṹ�����.�ṹ���Ա 
//->  �ṹ��ָ��->�ṹ���Ա 

//struct Point //��������
//{
//	int x;
//	int y;
//}p1 = { 10,15 };//������p1��ʼ��10�У�15��
//struct S 
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//
//int main()
//{ 
//	struct S ss = { 'w',{100,20},5.5,"hello" }; //�Ը��ӽṹ�����Ƕ�׳�ʼ��
//	//��ӡ�ṹ���Ա
//	printf("%c\n", ss.c);//ss.c����ss�ĳ�Աc,�����ʹ���ˡ�.���������
//	printf("%d %d\n", ss.sp.x, ss.sp.y);//��ӡ��������x,y
//	printf("%lf\n", ss.d);
//	printf("%s\n", ss.arr);
//	return 0;
//} 


struct Point //��������
{
	int x;
	int y;
}p1 = { 10,15 };//������p1��ʼ��10�У�15��
struct S
{
	char c;
	struct Point sp;
	double d;
	char arr[20];
};

void print1(struct S s)
{
	printf("%c\n", s.c);//ss.c����ss�ĳ�Աc,�����ʹ���ˡ�.���������
	printf("%d %d\n", s.sp.x, s.sp.y);//��ӡ��������x,y
	printf("%lf\n", s.d);
	printf("%s\n", s.arr);
}

void print2(struct S* ps) //ps�ǽṹ��ָ�룬ָ��ss
{
	printf("%c\n", ps->c); //ps->,�ͱ�ʾpsָ��ṹ���Աc
	printf("%d %d\n", ps->sp.x, ps->sp.y);//psָ�����sp��sp�ǽṹ���Ա��������������������Աһ����x,һ����y
	printf("%lf\n", ps->d) ; 
	printf("%s\n", ps->arr);
}
int main()   
{
	struct S ss = { 'w',{100,20},5.5,"hello" }; //�Ը��ӽṹ�����Ƕ�׳�ʼ��
	//��ӡ�ṹ���Ա
	ss.c = 'b';
	ss.sp.x = 1000;
	ss.sp.y = 2000;
	ss.d = 3.14;
	strcpy(ss.arr, "world");//strcpy�ַ�������������strcpy�ǿ⺯��������ҪӦ��#include <string.h>ͷ�ļ�
	//print1(ss);//����print1()������ӡ struct S���͵ı���
	print2(&ss); //��ss�ĵ�ַ��������print2();
	return 0;
}
 
//4>�ṹ�崫��
//�ѽṹ���һ�������������ĵ�ַ���д��ݣ����ݸ�����һ����������ͽнṹ�崫�� 
//>[ע��]print2(&ss)���ִ���ַ�ķ�ʽ���ӽ�ʡ�ռ䣬���ֱ��ʹ��print1(ss)��ʵ�θ��βΣ���ʱ�βξ���ʵ�ε���ʱ����������һ�������Ľṹ��ռ��100���ֽ�,ͬʱ�����������ʱ�䣬��ʱ�������βκ�����������100���ֽڡ�Ȼ��ת��ַ���ַ�ʽ��ռ�õĿռ���ܾ�ֻ�м����ֽڡ�
//��������ʱ����������Ҫѹջ�ġ�
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ṹ�壺
//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��
struct stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ��Ի�
	//%lf�Ǵ�ӡ˫���ȸ����͵ģ������ȴ�ӡ��%f
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����//.���������ҵ�����ṹ��ĳ�Ա�������ĳ�Ա�õ��ǡ�.��������
	struct stu * ps = &s;//struct stu *�ǽṹ��ָ�룬ps��ָ�����
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//��ͷ->ʹ�÷�ʽ:�ṹ��ָ��->��Ա������
	return 0;
}
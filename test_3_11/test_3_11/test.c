#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//do...while()ѭ��:��ִ�����ж�

//do�����﷨��
//do
//   ѭ����䣻
//while(���ʽ);
//do�����ص�ѭ������ִ��һ�Σ�ʹ�ó����������Բ��ܾ���ʹ��

/*int main()
{
	int a = 1;
	do
	{
		printf("%d\n", a);
		a++;
	} while ( a <= 10);

	return 0;
}*/  

//��ϰ������n�Ľ׳�
// 
//�ú���������׳ˣ�
//x:��ѭ���Ĵ���
//y:�������ֵ
//numΪÿѭ��һ�ε��۳�
//int multiple(int y)
//{
//	int x = 0;
//	int num = 1;
//	while (x < y)
//	{
//		x++;
//		num = num * x;
//	}
//	return num;
//}
//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	int factorial = multiple(n);
//	printf("%d\n", factorial);
//
//	return 0;
//}

//2.����1��+2��+3��+...+10!:
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	    for (i = 1; i <= n; i++)
//	    {
//
//		    num = num * i;
//		    //num *= i;  
//			sum = sum + num;
//	    }		
//	printf("%d\n", sum);
//	return 0;
//}


//3.��һ����������������Ҿ����ĳ������n��
//���ֲ���

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;//Ҫ���ҵ�����
	scanf("%d", &k);
	//��arr������������в���K��7����ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);//�ܴ�С���Ե�һ��Ԫ�صĴ�С���������Ԫ�ظ���
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2; //�ҵ������ƽ��ֵ
		if (arr[mid] < k)
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
			//mid = (left + right) / 2;
		}
		else
		{
			printf("�ҵ��ˣ��±���ǣ�%d\n", mid);
			break;
		}
	}
		if (left > right)
		{
			printf("�Ҳ���\n");

		}
	return 0;
} 

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//do...while()循环:先执行在判断

//do语句的语法：
//do
//   循环语句；
//while(表达式);
//do语句的特点循环至少执行一次，使用场景有限所以不能经常使用

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

//练习：计算n的阶乘
// 
//用函数来运算阶乘：
//x:是循环的次数
//y:是输入的值
//num为每循环一次的累乘
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

//2.计算1！+2！+3！+...+10!:
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


//3.在一个有序数组里面查找具体的某个数字n。
//二分查找

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;//要查找的数字
	scanf("%d", &k);
	//在arr这个有序数组中查找K（7）的值
	int sz = sizeof(arr) / sizeof(arr[0]);//总大小除以第一个元素的大小等于数组的元素个数
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2; //找到数组的平均值
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
			printf("找到了，下标就是：%d\n", mid);
			break;
		}
	}
		if (left > right)
		{
			printf("找不到\n");

		}
	return 0;
} 

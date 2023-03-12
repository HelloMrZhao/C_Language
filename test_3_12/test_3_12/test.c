#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//4.编写代码，演示多个字符从两端移动，向中间汇聚
#include <string.h> //strlen()；计算字符串长度的头文件
#include <windows.h>//Sleep();休眠函数的头文件
#include <stdlib.h> //system("cls")清屏函数的头文件
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//sizeof是C语言中的一个单目运算符，用来计算数据类型所占空间的大小，单位为字节；
//	//而strlen是一个函数，用来计算字符串长度
//	while (left < right)
//	{	
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(500); //Sleep()是一个休眠函数，1000毫秒=1秒
//		system("cls"); //清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5.编写代码实现，模拟用户登录情景，并且只能登录三次。
//只允许输入三次密码，如果密码正确则提示登录成功，
//如果三次均输入错误，则退出程序
//int main()
//{
//	int passward = 123456;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		printf("请输入密码：");
//		scanf("%d", &b);
//		if (b == passward )
//		{
//			printf("登陆成功!");
//			break;
//		}
//		else
//		{
//			printf("登录失败!\n");
//			Sleep(1000);
//		}	
//	}
//		if (i == 4)
//		{
//			printf("退出登录");
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
		printf("请输入密码：");
		scanf("%s", password);//应为password是个数组，数组名本来就是地址，所以不要加&取地址
		//if(password == "123456")//err - 两个字符串比较，不能用==，应该使用strcmp
		if (strcmp(password,"123456") == 0) //strcmp（）字符串比较函数，将"123456"和password同时传给strcmp，然后strcmp就会比较这两个，如果这两个相等就说明密码对了然后就返回0
			//strcmp（）函数比较的是两个字符串对应位置上的ASCLL码值
		{
			printf("登陆成功!");
			break;
		}
		else
		{
			printf("登录失败!\n");
		
		}	
	}
	if (i == 4)
	{
		printf("退出登录");
	}
				
	return 0;
}



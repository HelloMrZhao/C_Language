#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//C语言是结构化的程序设计语言

//顺序结构：
//选择结构：
//循环结构：

//分支语句与循环语句
//分支语句：
//if:
//switch

//循环语句：
//while:
//for:
//do while:

//goto语句：

//什么是语句？
//C语言中由一个分号‘；’隔开的就是一个语句
//C语言怎么表示真假的呢？
//非0就是真，-1就是真，0就是假
//int main()
//{
//	;//空语句
//	return 0;
//}

//if语句：
/*int main()
{
	int age = 10;
	scanf("%d", &age)*/;
	//if (age >= 18)
	//{
	//	printf("成年\n");
	//}
	//else
	//{
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}

	//if else的多分枝语句：
//	if (age < 18)
//	{
//		printf("pupil\n");
//	}
//	else if (age>=18 && age<26)
//	{
//		printf("tennagers\n");
//	}
//	else if(age >= 26 && age < 40)
//	{
//		printf("midlife\n");
//	}
//	else if(age >= 40 && age < 60)
//	{
//		printf("mature\n");
//	}
//	else
//	{
//		printf("odd\n");
//	}
//	return 0;
//}

	//悬空else:
	//将else与所属的if对齐，这样便于阅读

	//好的代码风格，例：
	//int main()
	//{
	//	int num = 3;
	//	if (5 == num)//将常量写在判断是否相等左边，这是好的代码编写风格
	//		printf("hehe\n");
	//	return 0;
	//}

	int main()
	{
		int a = 0;
		//scanf("%d", &a);
		//for (int a = 1; a < 100; a++)
		//{
		//	if (a % 2 == 1)
		//	{
		//		//printf("奇数");
		//		printf("%d ", a);
		//	}
			/*else
			{
				printf("偶数");
			}
		}*/
		/*	else
			{
				printf("erro");
			}*/
		//}

		for (int i = 1; i < 100; i+=2)
		{
			printf("%d ", i);
			
		}
			return 0;
	}
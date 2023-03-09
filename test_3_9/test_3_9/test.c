#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//循环：(循环是存在的，循环是可以被终止的
//while 循环：
 //在while循环中，break用于永久的终止循环
 //在while循环中，continue的作用是跳过本次循环continue后边的代码，直接去判断部分，看是否进行下一次计算
//do while
//for
//int main()
//{
//	while (1)//死循环,1为真
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (a == 5)
//		{
//			break;
//			//在while循环中，break用于永久的终止循环
//		}
//		printf("%d\n",  a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (a == 5)
//		{
//			continue;
//			
//		}
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//EOF - end of file -  文件的结束标志
//int main()
//{
	//int ch = getchar();//标志输入, getchar()是获取一个字符
	////printf("%c\n", ch);
	//putchar(ch); //输出一个字符
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl + z = getchar就读到了EOF，程序运行结束 
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//		//printf("%c\n",ch);
//	}
//	return 0;
//}

//getchar、scanf是输入函数，并没有从键盘上拿数据而是在中间的缓冲区里面拿数据
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");//123456
//	scanf("%s",password);//没有&取地址的原因是password是一个数组
//	//gets可以读取一行包括空格
//	printf("请确认密码(Y/N)：>");
//	//清理缓冲区
//	//getchar();//处理'\n'
//	//清理缓冲
//	int tmp = 0;
//	while ((tmp = getchar()) !='\n')
//	{
//		;
//	}
//
//	
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


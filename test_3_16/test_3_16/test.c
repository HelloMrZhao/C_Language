#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//不建议使用goto语句
//但是某种场合下goto语句还是用得着的，最常见的用方法就是终止程序在某些深度嵌套的结构处理过程，例如一次跳出两层或多层循环。
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0; 
//}

//goto语言真正适合的场景如下：
 //for(...)
	// for (...)
	// {
	//	 for (...)
	//	 {
	//		 if (disaster)
	//			 goto error;
	//	 }
	// }
 //...
	// error:
 //if (disaster)
	// // 处理错误情况


//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机
//shutdown -s -t 60;-s是设计关机，-t是设计时间关机；60是关机多少秒；
//shutdown -a//取消关机

//百度如何把一个可执行程序添加到服务里面去
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	//关机
//	//c语言提供了一个函数：system()-执行系统命令的
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s",input);
//	//strcmp(input)
//	//if (input == "我是猪")//两个字符串比较不能使用==的，应该使用strcmp()函数 string compare
//	if (strcmp(input,"我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


////goto 语句只能在一个函数范围 内跳转，不能跨函数,例如：
//
//void test()
//{
//flag:
//	printf("test\n");
//}
//int main()
//{
//	goto flag;
//	return 0;
//}


//自测：
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("注意！你的电脑将在60秒内关机，如果输入：我是猪，电脑将取消关机\n");
	scanf("%s", input);
	if (strcmp("我是猪",input) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}
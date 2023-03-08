#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//switch 语句
// switch(整型语句）
// {
//     语句项；
// }
// 语句项是一些case 整型常量表达式：(字符也可以，字符也是一种整型）
//                语句；
// case决定入口，break决定出口
//switch 语句也是一种分支语句。常常用于多分枝的情况，比如：
//输入1，输出星期一
//输入2，输出星期二
//输入3，输出星期三
//输入4，输出星期四
//输入5，输出星期五
//输入6，输出星期六
//输入7，输出星期七
//这种的多分枝如果用if...else语句很繁琐，所以要用switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	}
//	
//	return 0;
//}

//1 - 5 工作日
//6 - 7 休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//		switch (day)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default://不执行不履行
//			printf("input error\n");
//			break;
//		}
//
//	return 0;
//}

//练习：
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n) //switch允许嵌套使用该
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n); //输出结果 m = 5, n = 3
	return 0;
}
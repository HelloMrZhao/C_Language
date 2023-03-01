#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//选择语句：
//如果你好好学习，校招就能拿到一个好offer，走上人生巅峰。
//如果你不好好学习，毕业就等于失业，回家卖红薯。
//这就是选择

//int main()
//{
//	int input = 0;//输入的值，是存放输入值的一个变量
//	printf("加入比特：>\n");
//	printf("那要好好学习吗（1/0）？>：");
//	scanf("%d",&input ); //scanf取地址，取你输入的值是1还是0,把对应地址取来的整数放入&input中
//	if (input == 1)  //括号里是一个判断，判断intput是否为1
//	{
//		printf("好Offer\n"); //intput是1就是好offer
//	}	
//	else
//	{
//		printf("回家卖红薯\n"); //intput不是1就回家卖红薯
//	}
//		
//	return 0;
//}


//循环语句：
//比特 - 30000代码 - 找一个不错的工作

//while循环：
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n",line);
//		line ++;
//	}
//	if (line == 30000)
//	{
//		printf("娶白富美\n");
//	}
//	return 0;
//}


//函数
//数学中就已经学过函数，例：f(x) = 2*x+5;不同的x有不同的结果
//C语言中的函数也是一样的
//f(x,y) = x+y就等于C语言中Add(x,y) = x+y

//#define Add
//int Add(int x, int y) //因为num1, num2是整型所以要创建整型x,y来接收 //函数需要参数，没有参数无法传递，参数是函数与函数之间的交流方式
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum =num1 + num2;
//	//用函数的方式解决
//	//函数就相当于是一个委托人，把事情委托给他做，做好后给我返回一个值
//	int sum = Add(num1, num2); 
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//数组：

int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	//........

	 //数组 - 一组相同类型的元素的集合
	//10个整型1-10存起来
	//数组的创建和初始化
	//数组是用下标来访问的,下标是从0开始的
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//创建一个空间名字叫arr，[10]表示有十个元素，每个元素的类型叫int，这就是一个数组，然后给数组里面放入你需要的10个值
	//想要把数组全部打印出来就要产生下标0-9这个范围内的值
	int i = 0;
	while (i < 10) //while循环，i<10执行{}内的语句
	{
		printf("%d\n", arr[i]);
		i++;
	}
	char ch[5] = { 'a','b','c'}; //不完全初始化，剩余的值会被默认为0, "\0"也是一个0
	return 0;
}
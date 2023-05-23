#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//笔试题2
//结构体的大小是20个字节
//struct Test是结构体类型
//{}中是成员列表
// 
struct Test 
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];  
}* p;//创建结构体指针变量p
//假设p 的值为0x10000.如下表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节

//int main()
//{
//	p = (struct Test*)0x100000; //20:0001 0100 -->16进制14
//	printf("%p\n", p + 0x1); //000100014
//	//结构体指针加1，加的是1xsizeof(结构体)大小，结构体大小是20个字节
//	printf("%p\n", (unsigned long)p + 0x1);//00100001
//	//整型加1，加的就是一个字节
//	printf("%p\n", (unsigned int*)p + 0x1);//00100004
//	//整型指针加1，加的就是4个字节 
//	return 0;
//}


//按照小端来处理
//小端存入的顺序01 00 00 00 | 02 00 00 00 |  03 00 00 00 | 04 00 00 00
//取出的顺序 02 00 00 00
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%#x,%#x", ptr1[-1], *ptr2); //0x4, 0x2000000
//	// ptr1[-1]表示*(ptr1-1),所以取出的是4，打印出来的额就是4	
//	//%x是16进制打印
//	return 0;
//} 

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//这里面是逗号表达式，逗号表达式从左向右一次计算，整个表达式的结果是最后一个表达式的结果，{1，3，5}，{{1，3}，{5，0}，{0，0}}
//	//{1 3
//	// 5 0
//	// 0 0}
//	   
//	//int a[3][2] = { {0,1},{2,3},{4,5} };//二维数组的正确表示
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//p[0]表示*(p+0),p存的就是1的地址，p+0还是1的地址
//	return 0;
// }


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); //FFFFFFFC,-4
//	//p[4][2] --> *(*(p+4)+2)
//	//指针减指针得到的是指针之间元素的个数
//	return 0;
//}  



//笔试题6
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//aa+1跳过一行指向6
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


////笔试题7
////一个char*是一个或八个字节
//int main()
//{
//	char* a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}


//笔试题8
int main()    
{
	char* c[] = { "ENTER", "NEW","POINT","FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//point
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW   
	return 0;
}
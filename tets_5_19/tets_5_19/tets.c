#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//一维数组

//int main()
//{
//	char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//4/8  p是指针变量，计算的是指针变量的大小
//	//printf("%d\n", sizeof(p + 1));//4/8,p+1是b的地址，是地址就是4或8个字节
//	//printf("%d\n", sizeof(*p)); //1 - p存放的是a的地址，*p就是a
//	//printf("%d\n", sizeof(p[0]));//1-  p[0]就是 *(p+0)--->*p,p存放的是a的地址，*p就是a
//	//printf("%d\n", sizeof(&p));// 4/8 &p 是指针变量p在内存中的地址
//	//printf("%d\n", sizeof(&p + 1));//4/8  &p+1是跳过p之后的地址
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8 - a的地址加1就是b的地址，是地址，大小就是4/8
//
//	return 0; 
//}


//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5 - p是a的地址，p+1是b的地址，从b的地址往后数组长度就是5
//	//printf("%d\n", strlen(*p));//eer - *p是字符a
//	//printf("%d\n", strlen(p[0]));//err - p[0]就是 *(p+0)--->*p,p存放的是a的地址，*p就是a
//	printf("%d\n", strlen(&p));// 随机值，
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5 - b的地址向后数
//	return 0;
//}


//二维数组
//二维数组的理解：
//1.可以把二维数组想象成一维数组，二维数组的每一行是一个一维数组
int main()
{
	int a[3][4] = { 0 };//计算的是这个数组的大小，单位是字节3*4*4 = 48
	printf("%d\n", sizeof(a));//48  第一行第一个元素的大小
	printf("%d\n", sizeof(a[0][0]));//4  第1行第一个元素的大小
	printf("%d\n", sizeof(a[0]));//16 - a[0]是第一行的数组名，sizeof(a[0])就是第一行的数组名单独放在sizeof内部，计算的是第一行的大小
	printf("%d\n", sizeof(a[0] + 1));//4/8 a[0]作为第一行的数组名，并没有单独放在sizeof内部，也没有被取地址
	 //所以a[0]就是数组首元素的地址，就是第一行第一个元素的地址，a[0]+1就是第一行第二个元素的地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4 -  表示的是第一行第二个元素，所以是4个字节
	printf("%d\n", sizeof(a + 1));//4/8个字节 - a表示首元素的地址，a是二维数组，首元素的地址就是第一行的地址
	printf("%d\n", sizeof(*(a + 1)));//16 - 对第二行的地址解引用访问到就是第二行
	//*(a+1) ->  a[1]
	printf("%d\n", sizeof(&a[0] + 1));//a[0]是第一行的数组名，&a[0]取出的就是第一行的地址
	//&a[0] + 1就是第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1))); //16 - 对第二行的地址解引用访问到就是第二行
	printf("%d\n", sizeof(*a));//a 就是首元素地址就是第一行的地址，*a就是第一行
	//*a - > *(a+0) -> a[0]
	printf("%d\n", sizeof(a[3]));//16 int[4],虽然没有第四行但是无所谓，通过第四行的数组名可以联想到第三行第二行第一行的数组名，它们都相同，一行的数组名单独放在sizof中计算的就是这一行的大小
	return 0;
}

//总结：任何数组arr[i]只是形式上这么写（为了方便初学者理解），底层本质上是*(arr+i)
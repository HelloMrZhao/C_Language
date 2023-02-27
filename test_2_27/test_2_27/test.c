#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//字符串+转义字符+注释:

//字符串就是一串字符 - 用双引号括起来的一串字符,字符串的结束标志是\0的转义字符

//int main()
//{
//	"abcdef";
//	"HelloMrZhao";
//	return 0;
//}

#include <string.h>
//int main()
//{
	//字符数组 - 数组是一组相同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符
	//\0是字符串的结束标志
	//char arr[] = "hello";
	//char arr1[] = "abc";
	//char arr2[] = {'a','b','c'};
	//char arr2[] = { 'a','b','c','\0' };


	 
	//求一下字符串的长度
	//求数组元素个数的时候算\0但是求字符串的时候不算\0
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	//字符串的结束标志是\0，但在计算它的长度时是不包含它的
	//int len = strlen("abc");//string length,求字符串长度
	//printf("%d\n", len);//打印结果是3但是显示“strlen”未定义，表示strlen没有引入头文件#include <string.h>
	//打印字符串
	//printf("%s\n", arr1); //abc\0
	//printf("%s\n", arr2 ); //abc  ????

//	return 0;
//}

//转义字符 - 转变了它原有的意思
//int main()
//{
//	// \t
//	//printf("c:\test\test.c");
//	// \n
//	printf("ab\ncd");
//	return 0;
//}

int main()
{
	printf("(are you ok??)");//??) -- ] - 三字母词
	//(are you ok]
	//解决的办法就是给问号前加斜杠例如：printf("(are you ok\?\?)");
	return 0;
}
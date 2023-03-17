#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//C语言中函数的分类：
//1.库函数
// 网站：www.cplusplus.com
// C C++ 的官网 http://en.cppreference.com    //en改成zh就是中文版的了
//2.自定义函数

//简单总结，c语言常用的库函数都有：
//1.IO函数
// 输入输出函数 printf(), scanf(),getchar(), putchar()... 
//2.字符串操作函数
// strcmp()比较字符串, strlen()求字符长度函数。
// 3.字符操作函数
// toupper（）小写转大写函数，
//4.内存操作函数
// memcpy(),memcmp(),memset()
//5.时间/日期函数
// time()
//6.数字函数
// sqrt()开方函数,pow()求次方函数 
//7.其它库函数

//strcpy(),拷贝字符串，前面的参数是地址destination，后面的参数是source源
//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit"; //""双引号是引字符串的，{}花括号是在初始化数组元素的，往里面放元素的
//	strcpy(arr1,arr2);
//	printf("%s",arr1);//打印arr1这个字符串 %s -以字符串的 格式打印
//	return 0;
//}
//Debug是调试版本
//Relese是发布版本


//memset内存设置

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}

//strcpy
//char * strcpy(char* destination, const char* souurce);
//
//memset
//viod * memst(void* ptr, int value, size_tt num);

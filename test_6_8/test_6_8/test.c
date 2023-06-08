#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <malloc.h>
//strerror
///char* strerror(int errnum);
//返回错误码，所对应的错误信息

//全局变量：errno(错误码）

//0 1 2 3 4 ....
//
//404
//


//int main()
//{
//	//printf("%s\n", strerror(0));//No error
//	//printf("%s\n", strerror(1));//Operation not permitted
//	//printf("%s\n", strerror(2));//No such file or directory
//	//printf("%s\n", strerror(3));//No such process
//
//
//	int * p = (int*)malloc(40);//向堆区申请内存
//	if (p == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("hh");
//
//		perror("malloc");
//		return 1;
//	}
//
//	return 0;
//} 




//字符分类函数：

//函数                  如果他的参数符合下列条件就返回真
//iscntrl              任何控制字符
//isspace              空白字符：空格'',换页‘\f’,换行'\n',回车'\r',制表符'\t'或者垂直制表符'\v'
//isdigit              十进制数字0~9
//isxdigit              十六进制数字，包括所有十进制数字，小写字母a~f,大写字母A~F
//islower               小写字母a~z,是小写字母就返回非0，如果不是就返回0
//isupper               大写字母A~Z
//isalpha               字母a~z或A~Z
//isalnum               字母或者数字，a~z,A~Z,0~9
//ispunct               标记符号，任何不属于数字或者字母的图形字符（可打印）
 

#include <ctype.h>
int main()
{
	//int ret = isdigit('5');
	//printf("%d\n", ret);//4,isdigit('5')括号中是一个数就返回一个非0数字


	//判断大小写
	char ch = 'b';
	/*if (ch >= 'a' && ch <= 'z')
	{

	}*/

	//int ret = islower(ch);
	int ret = isalnum(ch);


	printf("%d\n", ret);
	return 0;
}
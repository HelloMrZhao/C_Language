#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//写一个猜数字游戏
//1.自动生成一个1 - 100之间的随机数
//2.猜数字
// a.猜对了，恭喜你，游戏结束
// b.你猜对了，会告诉你猜大了，还是猜小了，继续猜，直到猜对
//3.游戏可以一直玩，除非退出游戏
//

//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("####################\n");
//	printf("######1.play!#######\n");
//	printf("######0.exit!#######\n");
//	printf("####################\n");
//	
//}
//void game()
//{
//	//猜数字游戏的实现
//	//1.生成随机数
//	//rand函数返回了一个0-32767之间的数字
//	//时间 - 时间戳
//
//	int ret = rand() % 100 +1;//%100的余数是0-99，然后+1，范围就是1-100
//
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//	   // printf("随机数%d\n", ret);
//	    printf("开始猜数：\n");
//	    scanf("%d", &guess);
//	    if (guess > ret)
//	    {
//	    	printf("猜数错误数值偏大！\n");
//	    	printf("请重新猜！\n");
//	    
//	    }
//	    else if (guess < ret)
//	    {
//	    	printf("猜数错误数值偏小！\n");
//	    	printf("请重新猜！\n");
//	    }
//	    else
//	    {
//	    	printf("恭喜你,猜对了！\n");
//			break;
//	    }
//		
//	}
//}
//int main()
//{	
//	int intput = 0;
//	srand((unsigned int)time(NULL)); 
//	do
//	{
//		menu();
//		printf("请输入序号：\n");
//		scanf("%d", &intput);
//		switch (intput)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏：\n");
//			break;
//		default:
//			printf("输入序号错误！请重新输入：\n");
//			break;
//		}
//
//	} while (intput);
//	return 0;
//}



//自测：
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("#################################\n");
	printf("#############1.play!#############\n");
	printf("#############0.exit##############\n");
	printf("#################################\n");
}

void game()
{
	char a = 101;
	int ret = rand() % 100 + 1;
	//guess
	int guess = 0;
	while(1)
	{
		
		printf("please guess:\n");
		scanf("%d", &guess);
		if (guess == 101)
		{
			printf("exit the game!\n");
			break;
		}
		if (guess < ret)
		{
			printf("error value is too small!\n");
			printf("please re-guess:\n");
		}
		else if (guess > ret)
		{
			printf("error value is too large!\n");
			printf("please re-guess:\n");
		}
		else
		{
			printf("Congratulations  your,it's right !\n");
			break;
		}
	}
}
int main()
{	
	srand((unsigned int)time(NULL));
	int intput = 0;
	do
	{
		menu();
		printf("plase intput order!\n");
		scanf("%d", &intput);
		switch (intput)
		{
		    case 1:
				game();
			break;

			case 0:
				printf("exit the game!");
			break;
			default:
				printf("sorry input error!\n");
				printf("please re-enter:\n");
				break;
		}
	} while (intput);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//дһ����������Ϸ
//1.�Զ�����һ��1 - 100֮��������
//2.������
// a.�¶��ˣ���ϲ�㣬��Ϸ����
// b.��¶��ˣ��������´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸ����һֱ�棬�����˳���Ϸ
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
//	//��������Ϸ��ʵ��
//	//1.���������
//	//rand����������һ��0-32767֮�������
//	//ʱ�� - ʱ���
//
//	int ret = rand() % 100 +1;//%100��������0-99��Ȼ��+1����Χ����1-100
//
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//	   // printf("�����%d\n", ret);
//	    printf("��ʼ������\n");
//	    scanf("%d", &guess);
//	    if (guess > ret)
//	    {
//	    	printf("����������ֵƫ��\n");
//	    	printf("�����²£�\n");
//	    
//	    }
//	    else if (guess < ret)
//	    {
//	    	printf("����������ֵƫС��\n");
//	    	printf("�����²£�\n");
//	    }
//	    else
//	    {
//	    	printf("��ϲ��,�¶��ˣ�\n");
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
//		printf("��������ţ�\n");
//		scanf("%d", &intput);
//		switch (intput)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("������Ŵ������������룺\n");
//			break;
//		}
//
//	} while (intput);
//	return 0;
//}



//�Բ⣺
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
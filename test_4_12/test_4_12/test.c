#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ӡn�Ľ׳�
//int main()
//{
//	int n = 0;
//	//�ȴ�ӡn����
//	//scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//����1��+2��+3��+...+n!
//int main()
//{
//	int n = 0;
//	//�ȴ�ӡn����
//	int a = 0;
//	scanf("%d", &a);
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= a; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//��ӡð������
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����ð������Ĺ���
//	//ȷ��ð����������
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ����Ҫ�Ƚϼ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//ÿһ������ô�Ƚϵ�
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//        {
//			break;
//        }
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//��ϰ���Դ���

//��ѭ��
//���������ȴ���i�ڴ���arr����Ϊi��arr���Ǿֲ��������ֲ��������Ƿ���ջ�ϵģ�ջ����ʹ��ϰ������ʹ�øߵ�ַ���Ŀռ���ʹ�õ͵�ַ���Ŀռ䣬����ӦΪ�����±��������ַ���ɵ͵��߱仯�ģ�������ڴ�����ʱ��i��arr�м�ǡ�����������Ϳռ䣬������ѭ����ʱ�����Խ����п���ʹ��arr[12]��ʱ��������ǵ�i��
//��������ǻ��ڵ�ǰ��VS���µ�һ���ڴ沼�֣���������Ƿǳ����������ģ�������һ������Ч��������������
//int main()
//{
//
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//ջ����ʹ����᣺��ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�
//���������±��������ַ�ɵ͵��߱仯

//6.���д���ã����ڵ��ԣ��Ĵ��롣
//6.1�������
//1>������������
//2>bug����
//3>Ч�ʸ�
//4>�ɶ��Ը�
//5>��ά���Ը�
//6>ע������
//7>�ĵ���ȫ

//������coding���ɣ�
//1>ʹ��assert
//2>����ʹ��const
//3>�������õı�����
//4>��ӱ�Ҫ��ע��
//5>������������

//6.2ʾ��
//ģ��ʵ�ֿ⺯��:strcpy
//�ҵ�����:
//#include <string.h>
//void my_strcpy(char arr1[], char arr2[])
//{
//	int i = 0;
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int j = 0;
//	for (j = 0; j < len2; j++)
//	{
//		arr2[j] = '\0';
//	}
//
//	for (i = 0; i < len1; i++)
//	{
//		int tmp =  arr1[i];
//		 arr1[i] = arr2[i];
//		 arr2[i] = tmp;
//	}
//	//printf("%s\n", arr2);
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = { "xxxxxxxxxxxxx"};
//	//strcpy(arr2, arr1);//arr1��ΪԴͷ��ַ��arr2��ΪĿ�ĵ�ַ��strcpy��Դͷ��ַ������Ŀ�ĵ�ַ��
//    my_strcpy(arr1, arr2);	
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <string.h>

//��ʦ��������
// 5��
//void my_strcpy(char*dest, char*src )
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//
//	}
//	*dest = *src;
//}

//����--6��
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++; //����++����ʹ�ú�Ӽ�
//	}
//	*dest = *src;
//}

//����--7��
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//��׼��strcpy�����÷� -- char*strcpy(char*strDestination,const char*strSource);
//�Ż�--8��
//ʹ�ö���assert
//���Կ��԰����Ǽ�ӵĶ�λ���⣬�ȳ���ֱ�ӱ���������
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	//assert(dest != NULL);//����
//	//assert(src != NULL);//����
//	assert(dest && src);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//�Ż�--9��
//ʹ��const������src���ı䣬��ֹԴͷ��ַ��Ŀ���ַд��
//#include <assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest && src);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "";
//	char* p = NULL;
//	//strcpy(arr2, arr1);//arr1��ΪԴͷ��ַ��arr2��ΪĿ�ĵ�ַ��strcpy��Դͷ��ַ������Ŀ�ĵ�ַ��
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//�Ż�--10��
//����char*
//#include <assert.h>
////my_strcpy������Ʒ���ֵ������Ϊ��ʵ�ֺ�������ʽ����
//char*my_strcpy(char* dest, const char* src)
//{
//	int* ret = dest; //Ϊ�˷���dest���׵�ַ
//	assert(dest && src);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxx";
//	//strcpy(arr2, arr1);//arr1��ΪԴͷ��ַ��arr2��ΪĿ�ĵ�ַ��strcpy��Դͷ��ַ������Ŀ�ĵ�ַ��
//	
//	printf("%s\n", my_strcpy(arr2, arr1)); //ʵ���˺�������ʽ����
//	return 0;
//}


//����const�Ľ���
//int main()
//{
//	//int num = 10;
//	//num = 20;
//	//int* p = &num;
//	//*p = 30;
//	//printf("%d\n", num); //30
//
//	//const int num = 10;
//	////num = 20; //err
//	//int* p = &num;
//	//*p = 20;//
//	//printf("%d\n", num); //20,��Ȼconst�޶���num��һ����������������ָ�����ǿ���޸��ǲ�����ġ�
//	
//
//	//const int num = 10;
//	////num = 20; //err
//	//const int* p = &num;
//	////*p = 20;//err
//	//int n = 30;
//	//p = n;
//	//printf("%d\n", p);//30
//
//
//	const int num = 10;
//	//num = 20; //err
//	const int* const p = &num;
//	//*p = 20;//err
//	int n = 30;
//	//p = n; //err
//
//	//const ��������ָ��
//	//const ����*����ߣ�const int *p)
//	//const���ε���*p,��ʾpָ��Ķ�����ͨ��p���ı䣬����p�еĵ�ַ�ǿ��Ըı��
//	//const ����*���ұߣ�int* const p;)
//	//const ���ε���p,��ʾp�����ݲ��ܱ��ı䣬����pָ��Ķ����ǿ��Ըı��
//	//
//	return 0;
//}


//ģ��ʵ��strlen
//�ҵ�������
//#include <string.h>
//size_t my_strlen(const char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//����
#include <assert.h>
#include <string.h>
int my_strlen(const char* str)
{
	assert(str != NULL);//����
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] ="abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}

//�õݹ�ʵ��strlen����

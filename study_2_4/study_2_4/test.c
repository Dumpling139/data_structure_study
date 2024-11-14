#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("********************************\n");
//	printf("********************************\n");
//	printf("*****   1.Add      2.Sub   *****\n");
//	printf("*****   3.Mul      4.Div   *****\n");
//	printf("*****        0.exit        *****\n");
//	printf("********************************\n");
//	printf("请进行想要的计算:>\n");
//}
//
//
//int main()
//{
//	
//	int (*parr[])(int, int) = { NULL,Add,Sub,Mul,Div };
//	int i = 0;
//	int a = 0, b = 0;
//	while (1)
//	{
//		menu();
//		scanf("%d", &i);
//		if (parr[i]==NULL)
//		{
//			break;
//		}
//		else if(i>=1 && i<=4)
//		{
//			printf("请输入想要的操作数:>\n");
//			scanf("%d%d", &a, &b);
//			printf("结果是:%d\n", parr[i](a, b));
//		}
//		else
//		{
//			printf("输入错误，请重新输入:<\n");
//		}
//	}
//
//	return 0;
//}


//void exc(char* a, char* b,int size)
//{
//	for (int m = 0; m < size; m++)
//	{
//		char cmp = 0;
//		cmp = *(a);
//		*(a) = *(b);
//		*(b) = cmp;
//		a++;
//		b++;
//	}
//}
//
//void my_bubble(void* base, int count, int size, int (*p)(const void* p1, const void* p2))
//{
//	int i = 0, j = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (p((char*)base + size * j, (char*)base + size * (j + 1)) > 0)
//			{
//				exc((char*)base + size * j, (char*)base + size * (j + 1),size);
//			}
//		}
//	}
//
//}
//
//int int_cmp(const void* p1, const void* p2)
//{
//
//	return *(int*)p1 - *(int*)p2;
//}
//
//int main()
//{
//	int arr[] = { 5,6,8,1,2,0,9,7,4,3 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	my_bubble(arr,size,sizeof(arr[0]),int_cmp);
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0;
//	for (i = 0; i < size; i++)
//	{
//		int count = 0;
//		for (j = 0; j < size; j++)
//		{
//			if (i != j && arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//
//	}
//	return 0;
//}



//int main()
//{
//	int year = 0, month = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			printf("%d\n", 30);
//		}
//		else if (month == 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			{
//				printf("%d\n", 29);
//			}
//			else
//			{
//				printf("%d\n", 28);
//			}
//		}
//		else
//		{
//			printf("%d\n", 31);
//		}
//	}
//
//	return 0;
//}
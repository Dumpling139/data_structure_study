#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pch = &ch;
//	return 0;
//}



//int main()
//{
//	char* pch = "hello world!";
//	printf("%s\n", pch);
//}


//int main()
//{
//	char str1[] = "hello world.";
//	char str2[] = "hello world.";
//	const char* str3 = "hello world.";
//	const char* str4 = "hello world.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//int main()
//{
//	int sp1[10];
//	int(*sp2)[10];
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//	return 0;
//}

//void test(int(*arr)[5], int x, int y)//ָ����ʽ
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(arr+i)+j));//ָ����ʽ
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	test(arr, 3, 5);
//	return 0;
//}

//void test()
//{
//	printf("hehe");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}

//void test()
//{
//	printf("hehe");
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	void (*pt1)() = &test;//����ָ�����
//	void (*pt2)() = test;//����ָ�����
//
//	int (*pa1)(int, int) = Add;//����ָ�����
//	int (*pa2)(int x, int y) = &Add;//����ָ�����
//	return 0;
//}


//void test()
//{
//	printf("hehe");
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int (*pa1)(int, int) = Add;
//	printf("%d ", pa1(3, 5));
//	printf("%d ", (*pa1)(2, 4));
//	return 0;
//}

//int main()
//{
//	(*(void (*)())0)();
//}
//
//typedef unsigned int uint;
//typedef int (*pfun1)(int, int);
//typedef void (*pfun2)();
//
//typedef int(*parr)[10];
//
//typedef void (*pfun2)();
//pfun2 singal(int, pfun2);

//int(*parr)[10] = { 0 };

//int (*parr[10])();

//int main()
//{
//	int a = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("���������ֽ��м���->\n");
//
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			printf("���������\n");
//			scanf("%d%d", &x, &y);
//			printf("���Ϊ��%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("���������\n");
//			scanf("%d%d", &x, &y);
//			printf("���Ϊ��%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("���������\n");
//			scanf("%d%d", &x, &y);
//			printf("���Ϊ��%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("���������\n");
//			scanf("%d%d", &x, &y);
//			printf("���Ϊ��%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (a);
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("*****************************\n");
	printf("*****************************\n");
	printf("****  1.�ӷ�     2.����  ****\n");
	printf("****  3.�˷�     4.����  ****\n");
	printf("****  0.�˳�   **************\n");
	printf("*****************************\n");
}

int main()
{
	int a = 0;
	int x = 0, y = 0;
	do
	{
		menu();
		printf("���������ֽ��м���->\n");

		scanf("%d", &a);

		int (*pCal[5])(int, int) = { 0,Add,Sub,Mul,Div };
		if (a < 5 && a > 0)
		{
			printf("���������\n");
			scanf("%d%d", &x, &y);
			printf("���Ϊ��%d\n", pCal[a](x, y));
		}
		else if (a == 0)
		{
			printf("�˳�����\n");
		}
		else
		{
			printf("ѡ�����������ѡ��\n");
		}
	} while (a);

	return 0;
}
//int (*pCal[4])(int, int) = { Add,Sub,Mul,Div };


















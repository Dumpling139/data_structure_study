#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
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
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("****  1.加法     2.减法  ****\n");
//	printf("****  3.乘法     4.除法  ****\n");
//	printf("****  0.退出   **************\n");
//	printf("*****************************\n");
//}
//
//
//
//void Cal(int(*pf)(int, int))
//{
//	int x = 0, y = 0;
//	printf("输入操作数\n");
//	scanf("%d%d", &x, &y);
//	printf("结果为：%d\n", pf(x, y));
//}
//
//int main()
//{
//	int a = 0;
//	do
//	{
//		menu();
//		printf("请输入数字进行计算->\n");
//
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			Cal(Add);
//			break;
//		case 2:
//			Cal(Sub);
//			break;
//		case 3:
//			Cal(Mul);
//			break;
//		case 4:
//			Cal(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (a);
//
//	return 0;
//}

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
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("****  1.加法     2.减法  ****\n");
//	printf("****  3.乘法     4.除法  ****\n");
//	printf("****  0.退出   **************\n");
//	printf("*****************************\n");
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("请输入数字进行计算->\n");
//
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			printf("输入操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("结果为：%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("输入操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("结果为：%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("输入操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("结果为：%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("输入操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("结果为：%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (a);
//
//	return 0;
//}


//int int_cmp(const void* p1, const void* p2)//排序规则
//{
//	return(*(int*)p1 - *(int*)p2);
//}
//
//int main()
//{
//	int arr[] = { 5,9,1,3,0,7,6,4,2,8 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);//qsort函数
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

struct stu//学生
{
	char name[20];//名字
	int age;//年龄
};

struct stu s[] = { {"zhangsan",38},{"lisi",40},{"wangwu",18} };

int cmp_stu_by_name(const void* p1, const void* p2)//名字排序的方法
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}

int cmp_stu_by_age(const void* p1, const void* p2)//年龄排序的方法
{
	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;

}

void test1()//年龄排序
{
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

void test2()//名字排序
{
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);

}


int main()
{
	test1();
	test2();
	return 0;
}













































































































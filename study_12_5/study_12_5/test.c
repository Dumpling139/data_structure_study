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
//	printf("****  1.�ӷ�     2.����  ****\n");
//	printf("****  3.�˷�     4.����  ****\n");
//	printf("****  0.�˳�   **************\n");
//	printf("*****************************\n");
//}
//
//
//
//void Cal(int(*pf)(int, int))
//{
//	int x = 0, y = 0;
//	printf("���������\n");
//	scanf("%d%d", &x, &y);
//	printf("���Ϊ��%d\n", pf(x, y));
//}
//
//int main()
//{
//	int a = 0;
//	do
//	{
//		menu();
//		printf("���������ֽ��м���->\n");
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
//	printf("****  1.�ӷ�     2.����  ****\n");
//	printf("****  3.�˷�     4.����  ****\n");
//	printf("****  0.�˳�   **************\n");
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


//int int_cmp(const void* p1, const void* p2)//�������
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
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);//qsort����
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

struct stu//ѧ��
{
	char name[20];//����
	int age;//����
};

struct stu s[] = { {"zhangsan",38},{"lisi",40},{"wangwu",18} };

int cmp_stu_by_name(const void* p1, const void* p2)//��������ķ���
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}

int cmp_stu_by_age(const void* p1, const void* p2)//��������ķ���
{
	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;

}

void test1()//��������
{
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

void test2()//��������
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













































































































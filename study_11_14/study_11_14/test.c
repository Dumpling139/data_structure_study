#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Mul(int x)
//{
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=*%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int mun = 0;
//	scanf("%d", &mun);
//	Mul(mun);
//	return 0;
//}
//void Leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	Leap_year(year);
//	return 0;
//}

//int is_prime(int x)
//{
//	for (int i = 2; i <= x; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//			break;
//		}
//		return 1;
//	}
//	
//}
//
//int main()
//{
//	for (int num = 100; num <= 200; num++)
//	{
//		if (is_prime(num))
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}

void init(int x[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		x[i] = 0;
	}
}

void print(int x[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", x[i]);
	}
}

void reverse(int x[], int sz)
{
	for (int j = sz; j > 0; j--)
	{
		for (int i = 0; i < j-1; i++)
		{
			int a = 0;
			a = x[i];
			x[i] = x[i + 1];
			x[i + 1] = a;
		}
	}
	
}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	reverse(arr, 10);
	print(arr, 10);
	return 0;
}
//int a = 0;
//a = x[i];
//x[i] = x[i + 1];
//x[i + 1] = x[i];
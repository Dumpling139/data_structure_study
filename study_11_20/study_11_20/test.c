#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("hello\n");
//	main();//在main函数中调用main函数
//	return 0;
//}

//int fact(int x)
//{
//	if (x == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return x*fact(x - 1);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", fact(num));
//	return 0;
//}

//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int a = 1234;
//	print(a);
//	return 0;
//}
//int fact(int x)
//{
//	int j = 1;
//	for (int i = 1; i <= x; i++)
//	{
//		j *= i;
//	}
//	return j;
//}
//
//int main()
//{
//	int m = 4;
//	printf("%d ", fact(m));
//	return 0;
//}

//int i = 0;
//int Fib(int x)
//{
//	i++;
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	printf("%d", i);
//	return 0;
//}

//int Fib(int x)
//{
//	int a = 1, b = 1, c = 1;
//	while (x >= 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return b;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}

//int Han(int x)
//{
//	if (x == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 2*Han(x - 1) + 1;
//	}
//}

//int Han(int x)
//{	
//	int a = 1;
//	while (x)
//	{
//		if (x == 1)
//		{
//			return a;
//		}
//		else
//		{
//			a = a * 2 + 1;
//			x--;
//		}
//	}
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Han(n));
//	return 0;
//}

int Jump(int x)
{
	int a = 1, b = 2, c = 1;
	while (1)
	{
		if (x == 1)
		{
			return 1;
		}
		else if (x == 2)
		{
			return b;
		}
		else
		{
			c = a;
			a = b;
			b = b + c;
			x--;
		}
	}
}

//int Jump(int x)
//{
//	if (x <= 2)
//	{
//		return x;
//	}
//	else
//	{
//		return Jump(x - 1) + Jump(x - 2);
//	}
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", Jump(n));
	return 0;
}

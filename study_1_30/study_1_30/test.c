#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//void* my_memcpy(void* dst,const void* src, size_t num)
//{
//	void* ret = dst;
//	for (int i = 0; i < num; i++)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	//测试函数
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(a + 5, a, 20);
//	//打印数组
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//void* my_memmove(void* dst, void* src, size_t num)
//{
//	void* ret = dst;
//	if (dst <= src)
//	{
//		while (num--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst + 1;
//			src = (char*)src + 1;
//		}
//		return ret;
//	}
//	else
//	{
//		dst = (char*)dst + num-1;
//		src = (char*)src + num-1;
//		while (num--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst - 1;
//			src = (char*)src - 1;
//		}
//		return ret;
//	}
//}
//
//int main()
//{
//	//测试函数
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(a , a+3, 20);
//	//打印数组
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char a[] = "hello world";
//	memset(a, 'o', 6);
//	printf("%s", a);
//	return 0;
//}

//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0)
//		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0)
//		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else
//		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}

//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		scanf("%d", &a);
//		printf("%d\n", Fib(a));
//	}
//	return 0;
//}



//int power(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * power(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d", power(n, k));
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}


//int Fac1(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac1(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fac1(n));
//	return 0;
//}


//int Fac2(int n)
//{
//	int sum = n;
//	while (--n)
//	{
//		sum *= n;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fac2(n));
//	return 0;
//}

//void print(n)
//{
//	if (n > 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

int main()
{
	
	return 0;
}

//明天必须
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>


//int main()
//{
//	printf("input a and b=");
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int c = 0;
//	if (a > b)
//	{
//		c = a;
//	}
//	else
//	{
//		c = b;
//	}
//	printf("The max of a and b :%d\n", c);
//	return 0;
//}

//int main()
//{
//	printf("Input a year:");
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//	{
//		printf("%d is a leap year!\n", year);
//	}
//	else
//	{
//		printf("%d is not a leap year!\n", year);
//	}
//	return 0;
//}


//int main()
//{
//	printf("Input an integer number:");
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("a is an even number\n");
//	}
//	else
//	{
//		printf("a is an odd number\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("Input a,b,c:");
//	float a = 0, b = 0, c = 0;
//	scanf("%f,%f,%f", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		float s = (a + b + c) / 2;
//		float area = sqrt(s*(s - a)*(s - b)*(s - c));
//		printf("area=%.2f\n", area);
//	}
//	else
//	{
//		printf("It is not a triangle\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("Input a, b:");
//	int a = 0, b = 0;
//	scanf("%d,%d", &a, &b);
//	int c = 0;
//	if (a > b)
//	{
//		c = a;
//	}
//	else
//	{
//		c = b;
//	}
//	printf("max = %d\n",c);
//	return 0;
//}


//int main()
//{
//	printf("请输入月用电量：\n");
//	float a = 0;
//	scanf("%f", &a);
//	float b = 0;
//	if (a <= 50)
//	{
//		b = a * 0.53;
//	}
//	else
//	{
//		b = a * 0.58;
//	}
//	printf("应支付电费=%.2f\n",b);
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	for (sum = 100; sum <= 1000; sum++)
//	{
//		if (sum % 4 == 2 && sum % 7 == 3 && sum % 9 == 5)
//		{
//			printf("%d\n", sum);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	printf("There are following numbers:\n");
//	int a = 0;
//	for (a = 1000; a < 10000; a++)
//	{
//		if (a == (a % 100) * (a / 100) * (a % 100) * (a / 100))
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (int m = 0; m < 4; m++)
//	{
//		for (int i = 3-m; i > 0; i--)
//		{
//			printf(" ");
//		}
//		printf("******\n");
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%4d", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int x = 0, y = 0, z = 0;
//	for (x = 1; x < 10; x++)
//	{
//		for (y = 1; y < 10; y++)
//		{
//			for (z = 1; z < 10; z++)
//			{
//				if (x *100+ y *10+ z + y*100+ z*11 == 532)
//				{
//					printf("x=%d,y=%d,z=%d", x, y, z);
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 30; i < 100; i++)
//	{
//		int a = i * i;
//		int a1 = a % 10;
//		int b = a / 10;
//		int a2 = b % 10;
//		int c = a / 100;
//		int a3 = c % 10;
//		int d = a / 1000;
//		int a4 = d % 10;
//		if (a1 == a2 && a3 == a4 && a1 != a3)
//		{
//			printf("k=%d, m=%d\n", a, i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int g = 0, m = 0, x = 0;
//	for (g = 0; g <= 100; g++)
//	{
//		for (m = 0; m <= 100 - g; m++)
//		{
//			x = 100 - m - g;
//			int sum = g * 5 + m * 3 + x / 3;
//			if (sum == 100&&x%3==0)
//			{
//				printf("x=%d,y=%d,z=%d\n", g, m, x);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0, w = 0, k = 0;
//	printf("Man\tWomen\tChildren\n");
//	for (m = 0; m <= 30; m++)
//	{
//		for (w = 0; w <= 30 - m; w++)
//		{
//			k = 30 - m - w;
//			if (m * 3 + w * 2 + k * 1 == 50)
//			{
//				printf("%3d\t%5d\t%8d\n", m, w, k);
//			}
//
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 100; a < 1000; a++)
//	{
//		int a1 = a % 10;
//		int b = a / 10;
//		int a2 = b % 10;
//		int c = a / 100;
//		int a3 = c % 10;
//		if (a1 * a1 * a1 + a2 * a2 * a2 + a3 * a3 * a3 == a)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	printf("Please enter n:");
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		int sum = 1;
//		int n = i;
//		while (n > 0)
//		{
//			sum *= n;
//			n--;
//		}
//		printf("%d! = %ld\n", i, sum);
//	}
//	return 0;
//}

//int main()
//{
//	int g = 0, m = 0, x = 0;
//
//	return 0;
//}


//int main()
//{
//	int g = 0, m = 0, x = 0;
//	int a = 1;
//	for (g = 0; g <= 100; g++)
//	{
//		for (m = 0; m <= 100 - g; m++)
//		{
//			x = 100 - m - g;
//			int sum = g * 5 + m * 3 + x / 3;
//			if (sum == 100&&x%3==0)
//			{
//				printf("%2d:cock=%2d hen=%2d chicken=%2d\n",a,g,m,x);
//				a++;
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1; a <= 98; a++)
//	{
//		b = 98 - a;
//		if (a * 2 + b * 4 == 386)
//		{
//			printf("x=%d,y=%d\n", a, b);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	for (i = 0; i < 4; i++)
//	{
//		int a = 2 * i + 1;
//		while (a > 0)
//		{
//			printf("*");
//			a--;
//		}
//		printf("\n");
//	}
//}


//int main()
//{
//	int count = 0;
//	int a10 = 0, a5 = 0, a1 = 0;
//	for (a1 = 0; a1 <= 50; a1++)
//	{
//		for (a5 = 0; a5 <= 50 - a1; a5++)
//		{
//			a10 = 50 - a1 - a5;
//			if (a10 * 10 + a5 * 5 + a1 == 100)
//			{
//				printf("x = %d, y = %d, z = %d\n", a10, a5, a1);
//				count++;
//			}
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//int main()
//{
//	int a3 = 0, a2 = 0, a1 = 0;
//	int count = 0;
//	for (int a3 = 1; a3 < 10; a3++)
//	{
//		for (int a2 = 0; a2 < 10; a2++)
//		{
//			for (a1 = 0;a1<10;a1+=2)
//			{
//				if (a1 != a2 && a1 != a3 && a2 != a3)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 100; a < 1000; a++)
//	{
//		int a1 = a % 10;
//		int b = a / 10;
//		int a2 = b % 10;
//		int c = a / 100;
//		int a3 = c % 10;
//		if (a1 * a1 * a1 + a2 * a2 * a2 + a3 * a3 * a3 == a)
//		{
//			printf("%6d", a);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 30; i < 100; i++)
//	{
//		int a = i * i;
//		int a1 = a % 10;
//		int b = a / 10;
//		int a2 = b % 10;
//		int c = a / 100;
//		int a3 = c % 10;
//		int d = a / 1000;
//		int a4 = d % 10;
//		if (a1 == a2 && a3 == a4 && a1 != a3)
//		{
//			printf("Lorry_No. is %d .\n", a);
//		}
//	}
//	return 0;
//}

//int jie(int n)
//{
//	int x = 1;
//	while (n)
//	{
//		x *= n;
//		n--;
//	}
//	return x;
//}

//int main()
//{
//	printf("Input m:");
//	int i = 0;
//	scanf("%d", &i);
//	int n = jie(i);
//	printf("%d! = %ld\n", i, n);
//	return 0;
//}

//int jie(int n)
//{
//	int x = 1;
//	while (n)
//	{
//		x *= n;
//		n--;
//	}
//	return x;
//}
//
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	printf("Input n(n>0):");
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		sum += jie(a);
//		a--;
//	}
//	printf("sum = %lu\n", sum);
//	return 0;
//}

//int main()
//{
//	int a3 = 0, a2 = 0, a1 = 0;
//	int count = 0;
//	for (int a3 = 1; a3 < 10; a3++)
//	{
//		for (int a2 = 0; a2 < 10; a2++)
//		{
//			for (a1 = 0;a1<10;a1+=2)
//			{
//				if (a1 != a2 && a1 != a3 && a2 != a3)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int jie(int n)
//{
//	int x = 1;
//	while (n)
//	{
//		x *= n;
//		n--;
//	}
//	return x;
//}
//
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	printf("Input n(n>0):");
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		printf("%d! = %lu\n", i, jie(i));
//	}
//	return 0;
//}

//int yyy(int x)
//{
//	if (x == 1)
//	{
//		return 10;
//	}
//	else
//	{
//		return yyy(x - 1) + 2;
//	}
//}
//
//int main()
//{
//	int a5 = yyy(5);
//	printf("The 5th person's age is %d\n", a5);
//	return 0;
//}


//int Fib(int x)
//{
//	if (x == 1 || x == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}
//int main()
//{
//	printf("Input n:");
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 1; i <= a; i++)
//	{
//		printf("Fib(%d)=%d\n", i, Fib(i));
//	}
//	return 0;
//}


//int jie(int n)
//{
//	int x = 1;
//	while (n)
//	{
//		x *= n;
//		n--;
//	}
//	return x;
//}
//
//int main()
//{
//	printf("Input n:");
//	int n = 0;
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("n<0, data error!\n");
//	}
//	else
//	{
//		printf("%d! = %ld\n",n, jie(n));
//	}
//	return 0;
//}



//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	char b = a - 32;
//	printf("%c,%d\n", b, b);
//	return 0;
//}

//int main()
//{
//	printf("Enter a character:");
//	char a = 0;
//	scanf("%c", &a);
//	char z = a - 1;
//	char b = a + 1;
//	printf("%c %c %c\n", z, a, b);
//	printf("%d %d %d\n", z, a, b);
//	return 0;
//}


//int main()
//{
//	printf("Please input a low-case letter from keyboard:");
//	char a = 0;
//	scanf("%c", &a);
//	char b = a - 32;
//	printf("The capital letter and its ASCII value are:%c and %d.", b, b);
//	return 0;
//}

//int main()
//{
//	printf("Press a key and then press Enter:");
//	char a = 0;
//	scanf("%c", &a);
//	char b = a + 32;
//	printf("%c, %d\n", b, b);
//	return 0;
//}
//



//int main()
//{
//	printf("Press a key and then press Enter:");
//	char a = 0;
//	scanf("%c", &a);
//	char b = a + 32;
//	printf("%c", b);
//	return 0;
//}

//int main()
//{
//	printf("Input a character:");
//	char a = 0;
//	scanf("%c", &a);
//	if (a >= 65 && a <= 65 + 26)
//	{
//		char b = a + 32;
//		printf("%c,%d\n", b, b);
//	}
//	else if (a >= 97 && a <= 97 + 26)
//	{
//		char b = a - 32;
//		printf("%c,%d\n", b, b);
//	}
//	else
//	{
//		printf("%c,%d\n", a, a);
//	}
//	return 0;
//}
//



























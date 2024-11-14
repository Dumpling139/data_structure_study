#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//int main()
//{
//	int h = 1, r = 1;
//	printf("please input the height and the radius:\n");
//	scanf("%d,%d", &h, &r);
//	int a = 20/(3.14159 * r * r * h * 0.001)+1;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	printf("Enter a date(year month day):\n");
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//
//	printf("You entered the date: %02d/%02d/%d",b,c,a);
//	return 0;
//}

//int main()
//{
//    char t, c1, c2;
//
//    scanf("%c%c", &c1, &c2);
//    if (c1 > c2)
//    {
//        t = c1;
//        c1 = c2;
//        c2 = t;
//    }
//    printf("%c,%c", c1, c2);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i, j, k;
//    for (i = 0; i <= 3; i++)
//    {
//        for (j = 1; j <= 5; j++)
//        {
//            k = 8 - i - j;
//            if (k<=6&&k>=0)
//            {
//                printf("hong=%d\t,bai=%d\t,hei=%d\t\n", i, j, k);
//            }
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int head(int i)
//{
//	while (1)
//	{
//		if (i <= 10&&i>=-10)
//		{
//			return i;
//		}
//		i /= 10;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	printf("该整数以%d打头！\n", head(a));
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	printf("Input a float number:");
//	float a = 0;
//	scanf("%f", &a);
//	float c = 0;
//	if (a <= 0)
//	{
//		c = -a;
//	}
//	else
//	{
//		c = a;
//	}
//	printf("Absolute value of x is %.2f", c);
//	return 0;
//}


//int main()
//{
//	printf("Input data is:");
//	int a = 0;
//	scanf("%d",&a);
//	int b = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		b += a % 10;
//		a /= 10;
//	}
//	if (b < 0)
//	{
//		b = -b;
//	}
//	printf("The sum of the total bit is %d", b);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b < 10 ; b++)
//		{
//			int x = a * 1000 + a * 100 + b * 10 + b;
//			float y = sqrt(x);
//			int m = (int)y;
//			if (y == (int)y && b != a)
//			{
//				printf("The number is:%d\n", x);
//			}
//		}
//	}
//	return 0;
//}

//int han(int x)
//{
//	if (x == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 2 * (x - 1) + 1;
//		
//	}
//}
//
//int main()
//{
//	printf("Please enter the number of discs:");
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", han(a));
//	return 0;
//}
//
//#include <stdio.h>
//void movedisc(unsigned n, char fromneedle, char toneedle, char usingneedle);
//int i = 0;
//int main()
//{
//	unsigned n;
//	printf("Please enter the number of discs:");
//	scanf("%d", &n);
//	movedisc(n, 'a', 'b', 'c');
//	printf("\tTotal:%d\n", i);
//	return 0;
//}
//void movedisc(unsigned n, char fromneedle, char toneedle, char usingneedle)
//{
//	if (n == 1)
//		printf("%2d-(%2d):%c==>%c\n", ++i, n, fromneedle, toneedle);
//	else
//	{
//		movedisc(n - 1, fromneedle, usingneedle, toneedle);
//		printf("%2d-(%2d):%c==>%c\n", ++i, n, fromneedle, toneedle);
//		movedisc(n - 1, usingneedle, toneedle, fromneedle);
//	}
//}


//int Gcd(int a, int b)
//{
//	if (a <= 0 || b <= 0)
//	{
//		printf("Input number should be positive!\n");
//		return -1;
//	}
//	else
//	{
//		int m = 1;
//		for (int i = 1; i <= a && i <= b; i++)
//		{
//			if (a%i== 0 && b%i== 0)
//			{
//				m = i;
//			}
//		}
//		printf("Greatest Common Divisor of %d and %d is %d\n", a,b,m);
//		return m;
//	}
//}
//
//int main()
//{
//	printf("Input a,b:");
//	int a = 0, b = 0;
//	scanf("%d,%d", &a, &b);
//	Gcd(a, b);
//	return 0;
//}

//int fun(int x)
//{
//	if (x == 1)
//	{
//		return 10;
//	}
//	else
//	{
//		return fun(x - 1) + 2;
//	}
//}
//int main()
//{
//
//	printf("The 5th person's age is %d\n",fun(5));
//	return 0;
//}

//int main()
//{
//	printf("Press a key and then press Enter:");
//	char a = 0;
//	scanf("%c", &a);
//	if (a >= 65 && a <= 65 + 26)
//	{
//		a += 32;
//	}
//	else if (a >= 97 && a <= 97 + 26)
//	{
//		a -= 32;
//	}
//	printf("%c, %d\n", a, a);
//	return 0;
//}



//int main()
//{
//	printf("请输入圆的圆心坐标：");
//	float a = 0, b = 0;
//	scanf("%f,%f", &a, &b);
//
//	printf("请输入圆的半径：");
//	float r = 0;
//	scanf("%f", &r);
//
//	printf("请输入要判断的点的坐标(x,y)：");
//	float x = 0, y = 0;
//	scanf("%f,%f", &x, &y);
//	if ((x - a) * (x - a) + (y - b) * (y - b) < r * r)
//	{
//		printf("该点在圆内\n");
//	}
//	else if ((x - a) * (x - a) + (y - b) * (y - b) > r * r)
//	{
//		printf("该点不在圆内\n");
//	}
//	else
//	{
//		printf("该点在圆上\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    float a, b;
//    float sum, minus, product, quotient;
//    int remainder;
//
//    printf("\n请输入两个数:\n");
//    scanf("%f\n%f", &a, &b);
//    sum = a + b;
//    minus = a - b;
//    product = a * b;
//    quotient = a / b;
//    remainder = (int)a % (int)b;
//    printf("和为:%.2f\n", sum);
//    printf("差为:%.2f\n", minus);
//    printf("积为:%.2f\n", product);
//    printf("商为:%.2f\n", quotient);
//    printf("余数为:%d\n", remainder);
//    return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//int main()
//{
//    int i;
//    char ch;
//    float f;
//    printf("Please input:\n");
//    scanf("%d%c%f", &i, &ch, &f);
//    printf("The input integer is : %d \nThe input character is : %c\n", i, ch);
//    printf("The input float is : %f", f);
//    return 0;
//}

//int main()
//{
//	printf("Input n:");
//	int a = 0;
//	scanf("%d", &a);
//	int b0 = a % 10;
//	a /= 10;
//	int b1 = a % 10;
//	a /= 10;
//	int b2 = a % 10;
//	int sum = b0 + b1 + b2;
//	printf("b2=%d\tb1=%d\tb0=%d\tsum=%d\n", b2, b1, b0, sum);
//	return 0;
//}

//int main()
//{
//	printf("Enter two numbers:");
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	if (b == 0)
//	{
//		printf("cannot divide by zero.");
//	}
//	else
//	{
//		printf("%d", a / b);
//	}
//	return 0;
//}

//int main()
//{
//	printf("请输入两个整数：");
//	float a = 0, b = 0;
//	scanf("%f%f", &a, &b);
//	float c = (a / b)*100;
//
//	printf("%.0f is %.1f percent of %.0f",a,c,b);
//	return 0;
//}

//int main()
//{
//	printf("Input r:");
//	float r = 0;
//	scanf("%f", &r);
//	float d = 2 * 3.14159 * r, m = 3.14159 * r * r;
//	printf("circum = %.2f\n" "area = %.2f\n", d, m);
//	return 0;
//}

//int main()
//{
//	printf("Please input x and y:\n");
//	float a = 0, b = 0;
//	scanf("%f,%f", &a, &b);
//	float x = pow(a, 2);
//	float y = pow(b, 2);
//	float z = x + y;
//	printf("result=%.2f\n",z);
//	return 0;
//}

//int main()
//{
//	double a = 0, b = 0;
//	scanf("%lf,%lf", &a, &b);
//	double c = (a + b) / 2;
//	printf("The average is :%.2f", c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a, b, c;
//
//    printf("Input two integers:");
//    scanf("%d %d", &a, &b);
//    c = a/b;
//    printf("The quotient of a and b is :%d", c);
//    return 0;
//}




//int main()
//{
//	float h = 11.5, a = 2.5, c = 10;
//	float d = 2 * (h * a + h * c + a * c);
//	float v = h * a * c;
//	printf("area=%.2f,volume=%.2f", d,v);
//	return 0;
//}

//int main()
//{
//	printf("请输入三个单精度数：");
//	float  a = 0, b = 0, c = 0;
//	scanf("%f%f%f", &a, &b, &c);
//	float sum = a + b + c;
//	float ave = sum / 3;
//	printf("三个数的和为%.2f，均值为%.2f", sum, ave);
//	return 0;
//}

//int main()
//{
//	printf("Please input cels: ");
//	float a = 0;
//	scanf("%f", &a);
//	float b = (9.0 * a)/5 + 32;
//	printf("The fahr is: %.2f", b);
//	return 0;
//}

//int main()
//{
//	printf("请输入两个整数：");
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int s = a / b;
//	int y = a % b;
//	printf("%13d Remainder = %d\n", s, y);
//	printf("       ------\n");
//	printf("%5d ) %5d",b,a);
//	return 0;
//}

//int main()
//{
//	printf("请输入第一个整数：");
//	int a = 0, b = 0;
//	scanf("%d", &a);
//	printf("请输入第二个整数：");
//	scanf("%d", &b);
//	int c = a + b;
//	printf("%d + %d = %d\n",a,b,c);
//	return 0;
//}

//int main()
//{
//	printf("Please input your age: ");
//	int age = 0;
//	scanf("%d", &age);
//	int beast = age * 75 * 365 * 60 * 24;
//	printf("The heart beats in your life: %d", beast);
//	return 0;
//}

//int main()
//{
//	printf("Please input fahr: ");
//	float f = 0;
//	scanf("%f", &f);
//	float c = 5.0 * (f - 32.0) / 9.0;
//	printf("The cels is: %.2f", c);
//	return 0;
//}

//int main()
//{
//	printf("Input x:");
//	int x = 0;
//	scanf("%d", &x);
//	int a = x % 10;
//	x /= 10;
//	int b = x % 10;
//	x /= 10;
//	int c = x % 10;
//	int d = c + b * 10 + a * 100;
//	if (d < 0)
//	{
//		d = -d;
//	}
//	printf("y=%d\n", d);
//	return 0;
//}

//int main()
//{
//	printf("Enter 3 floats:");
//	float a = 0, b = 0, c = 0;
//	scanf("%f,%f,%f", &a, &b, &c);
//	float p = (a + b + c) / 2;
//	float s1 = p * (p - a) * (p - b) * (p - c);
//	float s = pow(s1, 0.5);
//	printf("area=%.2f\n", s);
//	return 0;
//}

//int main()
//{
//	printf("input data is:");
//	int a = 0;
//	scanf("%d", &a);
//	int b = a % 10;
//	a /= 10;
//	int c = a % 10;
//	a /= 10;
//	int d = a % 10;
//	int e = b + c + d;
//	printf("The sum of the total bit is %d\n", e);
//	return 0;
//}

//int main()
//{
//	printf("Please enter a positive integer: ");
//	int a = 0;
//	scanf("%d", &a);
//	int m = a;
//	int b = a % 10;
//	a /= 10;
//	int c = a % 10;
//	a /= 10;
//	int d = a % 10;
//	int e = d + c * 10 + b * 100;
//	printf("%d-->%d\n", m, e);
//	return 0;
//}














































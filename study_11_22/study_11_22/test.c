#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int n = num << 1;
//	printf("%d\n", num);
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int n = num >> 1;
//	printf("%d\n", num);
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	int n = num >> -1;//这是错误的
//	printf("%d\n", num);
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int num1 = -3;
//	int num2 = 5;
//	printf("%d\n", num1 & num2);
//	printf("%d\n", num1 | num2);
//	printf("%d\n", num1 ^ num2);
//	printf("%d\n", ~0);
//	return 0;
//}


//000000000000000000000000000000101(5)
//111111111111111111111111111111101(-3)
//000000000000000000000000000000101(5&(-3))

//000000000000000000000000000000101(5)
//111111111111111111111111111111101(-3)
//111111111111111111111111111111101(5|(-3))

//000000000000000000000000000000101(5)
//111111111111111111111111111111101(-3)
//111111111111111111111111111111000(5^(-3))

//00000000000000000000000000000000(0)
//11111111111111111111111111111111(~0)

//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;//b == a ^ b ^ b == a ^ 0 == a
//	a = a ^ b;//a == a ^ b ^ a == a ^ a ^ b == 0 ^ b == b
//}

//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	a = a & ~(1 << 4);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, b = a + 1);
//	printf("%d", c);
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];//学号
//};

//struct Point
//{
//	int x;
//	int y;
//}P1;
////或者：
//struct point p2;

//struct Point p3 = { 10,20 };
//struct Stu
//{
//	char name[15];
//	int age;
//};
//
//struct Stu s1 = { "hehe",20 };
//struct Stu s2 = {.age=20,.name="lisi"};

//struct Point
//{
//	int x;
//	int y;
//}P1;
//
//struct a
//{
//	struct Point;
//	int b;
//};
//
//struct a a1 = { {2,3},4 };

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//}p = { 1,2 };
//int main()
//{
//	printf("x: %d y: %d\n", p.x, p.y);
//	return 0;
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	struct Point p = { 3, 4 };
//	struct Point* ptr = &p;
//	ptr->x = 10;
//	ptr->y = 20;
//	printf("x = %d y = %d\n", ptr->x, ptr->y);
//	return 0;
//}


//int main()
//{
//	char a = 60;
//	char b = 10;
//	char c = 0;
//	c = a + b;
//	return 0;
//}
//int main()
//{	
//	char c1 = -1;
	//变量c1的二进制位（补码）中只有8个比特位：1111111
	//因为 char 为有符号的 char
	//所以整形提升的时候，高位补充符号位，即为1
	//提升之后的结果是：
	//11111111111111111111111111111111
//}

//正数的整形提升
//char c2 = 1;
//变量c2的二进制位（补码）中只有8个比特位：00000001
//因为 char 为有符号的 char
//所以整形提升的时候，高位补充符号位，即为0
//提升之后的结果是：
//00000000000000000000000000000001
//无符号整形提升，高位补0
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}


//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}


int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}
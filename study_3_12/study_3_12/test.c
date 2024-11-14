#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a[5] = { 0 };
//	int b[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%5d", b[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%5d", a[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a[100] = { 0 };
//	int m = 0;
//	for (i = 0; i < 99; i++)
//	{
//		int j = 0;
//		while (j < 5)
//		{
//			if (a[(m+1)%100] == 0)
//			{
//				j++;
//			}
//			m++;
//			if (m > 99)
//			{
//				m = m % 100;
//			}
//			
//		}
//		a[m] = 1;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		if (a[i] == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char a[100] = { 0 };
//	char b[100] = { 0 };
//	printf("Please input the first str:");
//	int i = 0;
//	int lengb = 0;
//	int lenga = 0;
//	int count = 0;
//	int flag = 0;
//	scanf("%s", &a);
//	printf("Please input the second str:");
//	scanf("%s", &b);
//	for (i = 0; i < 100; i++)
//	{
//		if (b[i] != 0)
//		{
//			lengb++;
//		}
//		if (a[i] != 0)
//		{
//			lenga++;
//		}
//	}
//	for (i = 0; i < lenga; i++)
//	{
//
//		if (a[i] == b[0])
//		{
//			int i1 = i;
//			int j = 0;
//			while (1)
//			{
//				if (a[i1] == b[j])
//				{
//					count++;
//					i1++;
//					j++;
//				}
//				if (b[j] == 0 || a[i1] == 0)
//				{
//					break;
//				}
//
//			}
//		}
//		if (count == lengb)
//		{
//			printf("YES\n");
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("NO\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	printf("Please enter a string:\n");
//	char a[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//	char n[10] = {0};
//	int i = 0;
//	int flag = 0;
//	scanf("%s", n);
//	for (i = 0; i < 7; i++)
//	{
//		int j = 0;
//		if (a[i][j] == n[j])
//		{
//			int count = 0;
//			for (int m = 0; m < 10; m++)
//			{
//				if (a[i][j] == n[j])
//				{
//					j++;
//					count++;
//				}
//			}
//			if (count == 10)
//			{
//				
//				printf("%s is %d\n", n, i);
//				flag++;
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("Not found!\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//main()
//{
//    int n=0;
//    char monthName[][20] = {"Illegal month", "January", "February", "March", "April", "May", "June"," July", "August", "September", "October", "November", "December"};
//
//    printf("Input month number:");
//    scanf("%d", &n);
//    if ((n <= 12) && (n >= 1))
//    {
//        printf("month %d is %s\n", n, monthName[n]);
//
//    }
//    else
//    {
//        printf("%s\n", monthName[0]);
//    }
//}

//int main()
//{
//	printf("Input a string:\n");
//	char a[50] = {0};
//	int i = 0;
//	for (i = 0; i < 50; i++)
//	{
//		scanf("%c", &a[i]);
//		if (a[i] == '\n')
//		{
//			a[i] = 0;
//		}
//	}
//	char max = 0;
//	
//	for (i = 0; i < 50; i++)
//	{
//		if (a[i] - max > 0)
//		{
//			max = a[i];
//		}
//	}
//	printf("The largest character of \"%s\" is \'%c\' ,The ASCII is %d.", a, max, max);
//	return 0;
//}

//int main()
//{
//	printf("Input Password:");
//	char a[7] = "secret";
//	char b[7] = {0};
//	scanf("%s", &b);
//	int c = strcmp(&a, b);
//	if(c==0)
//	{
//		printf("Correct password! Welcome to the system...");
//	}
//	else if (c<0)
//	{
//		printf("Invalid password!user input>password");
//	}
//	else
//	{
//		printf("Invalid password!user input<password");
//	}
//	return 0;
//}

//int main()
//{
//	printf("Please input a  string:");
//	char a[50] = {0};
//	scanf("%s", a);
//	int i = 0;
//	int n = 0, s = 0, e = 0,m=0;
//	for (i = 0; i < 20; i++)
//	{
//		if (a[i] == 32)
//		{
//			s++;
//		}
//		else if (a[i] >= 48 && a[i] <= 57)
//		{
//			n++;
//		}
//		else if ((a[i] >= 65 && a[i] <= 91) || (a[i] >= 97 && a[i] <= 123))
//		{
//			e++;
//		}
//		else if(a[i]!=0)
//		{
//			m++;
//		}
//		
//	}
//	printf("English character:  %d\n", e);
//	printf("digit character:  %d\n", n);
//	printf("space:  %d\n", s);
//	printf("other character:  %d\n", m);
//
//	return 0;
//}
//


//int main()
//{
//	printf("请输入6行字符串：\n");
//	char a[6][20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		gets_s(a[i], 20);
//	}
//	char* max = a[1];
//	char* min = a[1];
//	for (i = 0; i < 6; i++)
//	{
//		if (strcmp(max, a[i]) > 0)
//		{
//			max = a[i];
//		}
//		if (strcmp(min, a[i]) < 0)
//		{
//			min = a[i];
//		}
//	}
//	printf("The max string is: %s\n", max);
//	printf("The min string is: %s\n", min);
//	return 0;
//}

//int main()
//{
//	printf("Enter string 2:");
//	char a[40] = { 0 };
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		scanf("%c", a+i);
//	}
//	char b[40] = { 0 };
//	for (i = 0; i < 40; i++)
//	{
//		b[i] = a[i];
//	}
//	printf("Output string 1:%s\n", b);
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{
//    char str[80];
//    int i, num;
//
//    gets(str);
//    if (str[0] != ' ' && str[0] != '\0')
//    {
//        num = 1;
//    }
//    else
//    {
//        num = 0;
//    }
//    for (i = 1; str[i] != '\0'; i++)
//    {
//        if (str[i] != ' ' && str[i - 1] == ' ')
//        {
//            num++;
//        }
//    }
//    printf("num=%d\n", num);
//    return 0;
//}
//

//int main()
//{
//	printf("Please Enter String1:\n");
//	char a[30] = { 0 };
//	int i = 0;
//	for (i = 0; i < 30; i++)
//	{
//		scanf("%c", a + i);
//	}
//	printf("Result is:");
//	for (i = 29; i >= 0; i--)
//	{
//		if (a[i] != '\0'&&a[i]!='\n')
//		{
//			printf("%c", a[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a[5][5] = { {1,1,1,1,1},{2,1,1,1,1},{3,2,1,1,1},{4,3,2,1,1},{5,4,3,2,1} };
//	int i = 0,j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[3][3] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	int max = a[1][1];
//	int row = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (a[i][i] > max)
//		{
//			max = a[i][i];
//			row = i;
//		}
//		
//	}
//	printf("max=%d ,row=%d", max, row);
//	return 0;
//}
//
//int main()
//{
//	printf("请输入3*4矩阵：\n");
//	int a[3][4] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	int max = a[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//			}
//		}
//	}
//	printf("max value is %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { {1,2,3,4},{9,8,7,6},{10,-1,-4,4} };
//	int i = 0, j = 0;
//	int max = a[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//			}
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		printf("Input year,month:");
//		int year = 0, month = 0;
//		int flag = 0;
//		scanf("%d,%d", &year, &month);
//		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//		{
//			flag = 1;
//		}
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		{
//			printf("The number of days is %d\n", 31);
//			break;
//		}
//		else if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			printf("The number of days is %d\n", 30);
//			break;
//		}
//		else if (month == 2 && flag == 1)
//		{
//			printf("The number of days is %d\n", 29);
//			break;
//		}
//		else if (month == 2 && flag == 0)
//		{
//			printf("The number of days is %d\n", 28);
//			break;
//		}
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			a[i][j] = i + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%4d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a[2][3] = { 1,2,3,4,5,6 };
//	int i = 0, j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 2; i++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[2][3] = { 0 };
//	int b[3][2] = { 0 };
//	int i = 0, j = 0;
//	printf("Input 2*3 matrix a:\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("Input 3*2 matrix b:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	printf("Results:\n");
//	int c[2][2] = { 0 };
//	c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0];
//	c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1];
//	c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2] * b[2][0];
//	c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2] * b[2][1];
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%6d", c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a[20] = { 0 };
//	gets(a);
//	printf("%s", a);
//	return 0;
//}

//struct gift_list
//{
//	//公共属性
//	int stock_number;//库存量
//	double price; //定价
//	int item_type;//商品类型
//
//	//特殊属性
//	char title[20];//书名 123456789
//	char author[20];//作者
//	int num_pages;//?数
//
//	char design[30];//设计
//	int colors;//颜?
//	int sizes;//尺?
//};

//struct gift_list
//{
//	int stock_number;//库存量
//	double price; //定价
//	int item_type;//商品类型
//
//	union {
//		struct
//		{
//			char title[20];//书名
//			char author[20];//作者
//			int num_pages;//?数
//		}book;
//		struct
//		{
//			char design[30];//设计
//		}mug;
//		struct
//		{
//			char design[30];//设计
//			int colors;//颜?
//			int sizes;//尺?
//		}shirt;
//	}item;
//};


//int check_sys()
//{
//	union s
//	{
//		int i;
//		char a;
//	}un;
//	un.i = 1;
//	return un.a;
//}
//
//int main()
//{
//	if (check_sys)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//enum Sex//性别
//{
//	man,
//	woman,
//	secret
//};

//enum Color//颜色
//{
//	RED=4,
//	GREEN=8,
//	BLUE=18
//};
//
//int main()
//{
//	enum Color clr = GREEN;//赋值
//	return 0;
//}




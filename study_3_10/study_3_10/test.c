#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//struct stu
//{
//	char name[10];//名字
//	int age;//年龄
//	char sex[5];//性别
//};
//
//int main()
//{
//	//按照顺序初始化
//	struct stu s = { "张三",30,"男" };
//	printf("name:%s\n", s.name);
//	printf("age:%d\n", s.age);
//	printf("sex:%s\n", s.sex);
//	//按照指定顺序初始化
//	struct stu s2 = { .age = 20,.name = "李四",.sex = "男" };
//	printf("name:%s\n", s2.name);
//	printf("sex:%s\n", s2.sex);
//	printf("age:%d\n", s2.age);
//	return 0;
//}
//
//
//struct
//{
//	char a;
//	float b;
//	int c;
//}x;
//
//struct
//{
//	char a;
//	float b;
//	int c;
//}a[20],*p;
//
//int main()
//{
//	p = &x;
//	return 0;
//}
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;

//int main()
//{
//	//练习1
//	struct S1
//	{
//		
//		char c1;//char类型占1字节偏移量为0
//		int i;//int类型占4字节，因此对齐数为4，由于第二条对齐规则，偏移量为4
//		char c2;//char类型占1字节，偏移量为8
//		//由于第三条对齐规则，结构体类型的大小为12
//	};
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}

//int main()
//{
//	//练习2
//	struct S2
//	{
//		char c1;
//		char c2;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S2));
//	//练习3
//	struct S3
//	{
//		double d;
//		char c;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S3));
//	//练习4-结构体嵌套问题
//	struct S4
//	{
//		char c1;
//		struct S3 s3;
//		double d;
//	};
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//int main()
//{
//	//练习2
//		struct S2 
//	{
//		char c1;//char类型占1字节偏移量为0
//		char c2;//char类型占1字节，由于第二条对齐规则，偏移量为1
//		int i;//char类型占1字节，由于第二条对齐规则，偏移量为4
//		//结构体类型的大小为8
//	};
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//int main()
//{
//	// 练习2
//	struct S2
//	{
//		char c1;
//		char c2;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//int main()
//{
//	//练习3
//	struct S3
//	{
//		double d;//double类型占8字节偏移量为0
//		char c; // char类型占1字节，因此对齐数为1，偏移量为8
//		int i;//int类型占4字节，因此对齐数为4，由于第二条对齐规则，偏移量为12
//	};//结构体类型的大小为16
//	printf("%d\n", sizeof(struct S3));
//}

//int main()
//{
//	//练习4-结构体嵌套问题
//	struct S3
//		{
//			double d;//double类型占8字节偏移量为0
//			char c; // char类型占1字节，因此对齐数为1，偏移量为8
//			int i;//int类型占4字节，因此对齐数为4，由于第二条对齐规则，偏移量为12
//		};//结构体类型的大小为16
//	struct S4
//	{
//		char c1;// char类型占1字节，因此对齐数为1，偏移量为0
//		struct S3 s3;//struct S3类型占16字节，因此对齐数为8，由于第二条对齐规则，偏移量为8
//		double d;//double类型占8字节，因此对齐数为8，由于第四条对齐规则，偏移量为24
//	};//结构体类型大小为32
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//int main()
//{
//	//练习4-结构体嵌套问题
//	struct S3
//	{
//		double d;
//		char c;
//		int i;
//	};
//	struct S4
//	{
//		char c1;
//		struct S3 s3;
//		double d;
//	};
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//#pragma pack(1)//修改默认对齐数为1
//struct s
//{
//	char a;
//	int b;
//	char c;
//};
//#pragma pack()//取消修改，还原为默认
//int main()
//{
//	printf("%d", sizeof(struct s));
//	return 0;
//}
//struct S
//{
//	char name[10];
//	int age;
//	char sex[5];
//};
//
//void print1(struct S s)
//{
//	printf("%d", s.age);
//}
//
//void print2(struct S* ps)
//{
//	printf("%d", ps->age);
//}
//
//struct S s = { "张三",10,"男" };
//
//int main()
//{
//	print1(s);
//	print2(&s);
//	return 0;
//}
//

//struct s
//{
//	int a : 2;
//	int b : 5;
//	int c : 8;
//	int d : 10;
//};
//int main()
//{
//	struct s a = { 3,2,3,4 };
//	printf("%d,%d,%d,%d", a.a, a.b, a.c, a.d);
//	return 0;
//}

//struct A {
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	struct A sa = { 0 };
//	scanf("%d", &sa._b);//这是错误的
//
//	//正确的⽰范
//	int b = 0;
//	scanf("%d", &b);
//	sa._b = b;
//	return 0;
//}

union Un
{
	char a;
	int b;
};

//int main()
//{
//	union Un n = { 0 };
//	//输出的结果是一样的吗？
//	printf("%p\n", &n);
//	printf("%p\n", &(n.a));
//	printf("%p\n", &(n.b));
//	return 0;
//}

//int main()
//{
//	union Un n = { 0 };
//	n.b = 0x11223344;
//	n.a = 0x55;
//	//结果是多少？
//	printf("%x\n", n.b);
//	return 0;
//}

//struct S
//{
//	char c;
//	int i;
//};
//
//union Un
//{
//	char c;
//	int i;
//};


#include <stdio.h>
union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};
int main()
{
	//下⾯输出的结果是什么？
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}





























#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int num = 10;
//	int* parr = (int*)malloc(num * sizeof(int));
//	if (parr==NULL)//判断是否开辟成功
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	int i = 0;//实现数组功能
//	for (i = 0; i < num; i++)
//	{
//		*(parr + i) = i;
//	}
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	free(parr);//有这个必要吗？
//	parr = NULL;
//	return 0;
//}

//void free(void* ptr);

//void* calloc(size_t num, size_t size);

//int main()
//{
//	int num = 10;
//	int* parr1 = (int*)malloc(num * sizeof(int));
//	if (parr1 == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int* parr2 = (int*)calloc(num , sizeof(int));
//	if (parr2 == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(parr1 + i));
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(parr2 + i));
//	}
//	return 0;
//}
//
//void* realloc(void* ptr, size_t size);

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//		//业务处理
//	}
//	else
//	{
//		return 1;
//	}
//	//扩展容量
//
//	//代码1 - 直接将realloc的返回值放到ptr中
//	ptr = (int*)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
//
//	//代码2 - 先将realloc函数的返回值放在p中，不为NULL，在放ptr中
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)		
//	{
//		ptr = p;
//	}
//	//业务处理
//	free(ptr);
//	return 0;
//}


//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}

//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}

//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok?
//}
//
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int test(void)
//{
//	int p = 1;
//	return p;
//}
//
//
//int main()
//{
//	printf("%d", test());
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//int main()
//{
//
//	return 0;
//}

//struct Test
//{
//	char a;
//	int b;
//	int a[0];
//};
//
//int main()
//{
//	printf("%d", sizeof(struct Test));
//	return 0;
//}

////代码1 
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
//	//业务处理
//	p->i = 100;
//	for (i = 0; i < 100; i++)
//	{
//		p->a[i] = i;
//	}
//	free(p);
//	return 0;
//}

//代码2 #include <stdio.h>
#include <stdlib.h>
typedef struct st_type
{
	int i;
	int* p_a;
}type_a;
int main()
{
	type_a* p = (type_a*)malloc(sizeof(type_a));
	p->i = 100;
	p->p_a = (int*)malloc(p->i * sizeof(int));

	//业务处理
	for (i = 0; i < 100; i++)
	{
		p->p_a[i] = i;
	}

	//释放空间
	free(p->p_a);
	p->p_a = NULL;
	free(p);
	p = NULL;
	return 0;
}
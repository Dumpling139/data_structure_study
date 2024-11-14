#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int main()
//{
//	int a = 9;
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	printf("%p\n", &a);//其中，%p表示输出地址，&a表示a的地址。
//
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	int* pa = &a;
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pch = &ch;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 0;//这里用了解引用操作符。
//	printf("%d\n", a);
//	return 0;
//}


//代码（1）

//int main()
//{
//	int n = 0x11223344;
//	int* pn = &n;
//	*pn = 0;
//	printf("%d\n", n);
//	return 0;
//}

//代码（2）

//int main()
//{
//	int n = 0x11223344;
//	char* pn = &n;
//	*pn = 0;
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//}


//int main()
//{
//	int a = 10;
//	void* pa = &a;
//
//	*pa = 0;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa1 = &a;
//	char* pa2 = &a;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a = 0;//a可以修改
//	const b = 20;
//	b = 10;//b不可修改
//	return 0;
//}

//int main()
//{
//	const b = 20;
//	int* pb = &b;
//	*pb = 0;
//	printf("%d\n", b);
//	return 0;
//}



//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	*p = 0;//ok?
//	p = &m;//ok?
//}
//void test2()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 0;//ok?
//	p = &m;//ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 0;//ok?
//	p = &m;//ok?
//}
//void test4()
//{
//	int n = 10;
//	int m = 20;
//	const int* const p = &n;
//	*p = 0;//ok?
//	p = &m;//ok?
//}
//
//int main()
//{	
//	test1();
//	test2();
//	test3();
//	test4();
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - s;
//}
//
//int main()
//{
//	printf("%d", my_strlen("abc"));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < arr + sz)//指针大小比较
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int* p;
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	
//	for (int i = 0; i <= 11; i++)
//	{
//		*(p++) = i;//当指针超过数组的范围时，就是野指针。
//	}
//	return 0;
//}

//int* test()
//{
//	int n = 100;
//	return &n;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	return 0;
//}

//assert(p != NULL);
//size_t strlen(const char* str);


//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}

void Swap(int* x, int* y)
{
	int i = 0;
	i = *x;
	*x = *y;
	*y = i;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前:a=%d,b=%d\n", a, b);
	Swap(&a, &b);
	printf("交换后:a=%d,b=%d\n", a, b);
}






























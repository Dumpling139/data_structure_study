#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int b = (*(char*)&i);
//
//	if (b == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//		
//	return 0;
//	}


//int main()
//{
//	char a = -1;
//	//-1:
//	//10000000 00000000 00000000 00000001(ԭ��)
//	//11111111 11111111 11111111 11111111(����)
//	//a:
//	//10000001(ԭ��)
//	//11111111(����)
//	signed char b = -1;
//	//b:
//	//10000001(ԭ��)
//	//11111111(����)
//	unsigned char c = -1;
//	//c:
//	//11111111(ԭ��)
//	//11111111(����)
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//-128:
//	//10000000 00000000 00000000 10000000(ԭ��)
//	//11111111 11111111 11111111 10000000(����)
//	//a:
//	//10000000(ԭ��)
//	//10000000(����)
//	//11111111 11111111 11111111 10000000(��������)
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	//00000000 00000000 00000000 10000000(ԭ��)
//	//00000000 00000000 00000000 10000000(����)
//	//a:
//	//10000000(ԭ��)
//	//10000000(����)
//	//11111111 11111111 11111111 10000000(��������)
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//a[i]=-1��-2��-3��...��-128��127��126��...��0��-1��...
//	}
//	printf("%d", strlen(a));//��/0������ҵ����ͼ���/0֮ǰ�ĳ���
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//i=0,1,...,255,0,1,...
//	}
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//i=9,8,7,...,1,0,2^33-1,2^33-2,...
//		Sleep(1000);
//	}
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//a[4]=01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}


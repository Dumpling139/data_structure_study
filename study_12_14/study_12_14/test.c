#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//
//	char* p = "abcdef";//�����ַ������Һ�����\0
//
//	printf("%d\n", strlen(p));
//	//p��a�ĵ�ַ�����Խ��Ϊ6
//	printf("%d\n", strlen(p + 1));
//	//p+1��b�ĵ�ַ�����Խ����5
//	//printf("%d\n", strlen(*p));
//	//*p��a�����ǵ�ַ�����error
//	//printf("%d\n", strlen(p[0]));
//	//p[0]Ҳ��a�����ǵ�ַ�����error
//	printf("%d\n", strlen(&p));
//	//&p����p�ĵ�ַ�����Ϊ���ֵ
//	printf("%d\n", strlen(&p + 1));
//	//&p+1����p����ĵ�ַ�����Ϊ���ֵ
//	printf("%d\n", strlen(&p[0] + 1));
//	//&p[0]+1����b�ĵ�ַ�������5
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	printf("%zd\n", sizeof(p));
//	printf("%zd\n", sizeof(p + 1));
//	printf("%zd\n", sizeof(*p));
//	printf("%zd\n", sizeof(p[0]));
//	printf("%zd\n", sizeof(&p));
//	printf("%zd\n", sizeof(&p + 1));
//	printf("%zd\n", sizeof(&p[0] + 1));
//	
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
//	printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { {1,2,3,4},{5,6,7,8},{8,9,0,1} };
//
//	printf("%zd\n", sizeof(a));
//	//������sizeof(������)�����������������ĳ��ȣ������48
//	printf("%zd\n", sizeof(a[0][0]));
//	//a[0][0]������ǵ�һ�е�һ��Ԫ��0�������4
//	printf("%zd\n", sizeof(a[0]));
//	//a[0]�ǵ�һ�е�һά��������������sizeof(������)�������16
//	printf("%zd\n", sizeof(a[0] + 1));
//	//a[0] + 1������ǵ�һ�еڶ���Ԫ�صĵ�ַ�������4��8
//	printf("%zd\n", sizeof(*(a[0] + 1)));
//	//*(a[0] + 1)������ǵ�һ�еڶ���Ԫ�أ������4
//	printf("%zd\n", sizeof(a + 1));
//	//a + 1������ǵڶ��е�һά����ĵ�ַ�������4��8
//	printf("%zd\n", sizeof(*(a + 1)));
//	//*(a + 1)������ǵ�һ�е�һά��������ã��õ��ľ��ǵ�һ�е�һά���飬�����16
//	printf("%zd\n", sizeof(&a[0] + 1));
//	//&a[0]����&(������)�������&a[0] + 1�õ��ľ��ǵڶ��е�һά����ĵ�ַ�������4��8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));
//	//&a[0] + 1�õ��ľ��ǵڶ��е�һά����ĵ�ַ��*(&a[0] + 1)�õ��ľ��ǵڶ��е�һά���飬�����16
//	printf("%zd\n", sizeof(*a));
//	//a�����һ��һά����ĵ�ַ��*a���ǵ�һ��һά���飬�����16
//	printf("%zd\n", sizeof(a[3]));
//	//a[3]������ǵ�����һά������һ�����飬��������Ϊ���ֵ�����Ϊ16
//
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
//

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}


int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//point
	printf("%s\n", *-- * ++cpp + 3);//er
	printf("%s\n", *cpp[-2] + 3);//st
	printf("%s\n", cpp[-1][-1] + 1);//ew
	return 0;
}























#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//
//	char* p = "abcdef";//p������a�ĵ�ַ
//	printf("%zd\n", sizeof(p));//û�г������������p����a�ĵ�ַ�����Խ����4��8
//	printf("%zd\n", sizeof(p + 1));//û�г������������p+1����b�ĵ�ַ�����Խ����4��8
//	printf("%zd\n", sizeof(*p));//û�г������������*p�����ַ�a�����Խ����1
//	printf("%zd\n", sizeof(p[0]));//û�г������������p[0]����*(p+0)�����Խ����1
//	printf("%zd\n", sizeof(&p));//û�г������������&p�Ƕ���ָ�룬�����4��8
//	printf("%zd\n", sizeof(&p + 1));//û�г������������&p+1�Ƕ���ָ�룬�����4��8
//	printf("%zd\n", sizeof(&p[0] + 1));//û�г������������&p[0]+1=&*(p+0)+1���������ָ�룬ָ����b�����Խ����4��8
//
//	return 0;
//}



int main()
{

	char* p = "abcdef";//p������a�ĵ�ַ,f����һ����ַ��\0
	printf("%d\n", strlen(p));//û�г������������p����a�ĵ�ַ�����Խ����6
	printf("%d\n", strlen(p + 1));//
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));

	return 0;
}
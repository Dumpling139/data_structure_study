#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//
//	char* p = "abcdef";//p代表了a的地址
//	printf("%zd\n", sizeof(p));//没有出现特殊情况，p代表a的地址，所以结果是4或8
//	printf("%zd\n", sizeof(p + 1));//没有出现特殊情况，p+1代表b的地址，所以结果是4或8
//	printf("%zd\n", sizeof(*p));//没有出现特殊情况，*p代表字符a，所以结果是1
//	printf("%zd\n", sizeof(p[0]));//没有出现特殊情况，p[0]代表*(p+0)，所以结果是1
//	printf("%zd\n", sizeof(&p));//没有出现特殊情况，&p是二级指针，结果是4或8
//	printf("%zd\n", sizeof(&p + 1));//没有出现特殊情况，&p+1是二级指针，结果是4或8
//	printf("%zd\n", sizeof(&p[0] + 1));//没有出现特殊情况，&p[0]+1=&*(p+0)+1，结果还是指针，指向了b，所以结果是4或8
//
//	return 0;
//}



int main()
{

	char* p = "abcdef";//p代表了a的地址,f的下一个地址是\0
	printf("%d\n", strlen(p));//没有出现特殊情况，p代表a的地址，所以结果是6
	printf("%d\n", strlen(p + 1));//
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));

	return 0;
}
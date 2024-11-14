#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//
//	char* p = "abcdef";//常量字符串，且后面有\0
//
//	printf("%d\n", strlen(p));
//	//p是a的地址，所以结果为6
//	printf("%d\n", strlen(p + 1));
//	//p+1是b的地址，所以结果是5
//	//printf("%d\n", strlen(*p));
//	//*p是a，不是地址，结果error
//	//printf("%d\n", strlen(p[0]));
//	//p[0]也是a，不是地址，结果error
//	printf("%d\n", strlen(&p));
//	//&p代表p的地址，结果为随机值
//	printf("%d\n", strlen(&p + 1));
//	//&p+1代表p后面的地址，结果为随机值
//	printf("%d\n", strlen(&p[0] + 1));
//	//&p[0]+1代表b的地址，结果是5
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
//	//出现了sizeof(数组名)，计算的是整个数组的长度，结果是48
//	printf("%zd\n", sizeof(a[0][0]));
//	//a[0][0]代表的是第一行第一个元素0，结果是4
//	printf("%zd\n", sizeof(a[0]));
//	//a[0]是第一行的一维数组名，出现了sizeof(数组名)，结果是16
//	printf("%zd\n", sizeof(a[0] + 1));
//	//a[0] + 1代表的是第一行第二个元素的地址，结果是4或8
//	printf("%zd\n", sizeof(*(a[0] + 1)));
//	//*(a[0] + 1)代表的是第一行第二个元素，结果是4
//	printf("%zd\n", sizeof(a + 1));
//	//a + 1代表的是第二行的一维数组的地址，结果是4或8
//	printf("%zd\n", sizeof(*(a + 1)));
//	//*(a + 1)代表的是第一行的一维数组解引用，得到的就是第一行的一维数组，结果是16
//	printf("%zd\n", sizeof(&a[0] + 1));
//	//&a[0]属于&(数组名)的情况，&a[0] + 1得到的就是第二行的一维数组的地址，结果是4或8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));
//	//&a[0] + 1得到的就是第二行的一维数组的地址，*(&a[0] + 1)得到的就是第二行的一维数组，结果是16
//	printf("%zd\n", sizeof(*a));
//	//a代表第一行一维数组的地址，*a就是第一行一维数组，结果是16
//	printf("%zd\n", sizeof(a[3]));
//	//a[3]代表的是第三行一维数组后的一个数组，其中内容为随机值，结果为16
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























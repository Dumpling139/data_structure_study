#define _CRT_SECURE_NO_WARNINGS 1
#include"count.h"
#include<stdio.h>


int main()
{
	char a[100] = {0};
	scanf("%s", a);
	float b = Count(a,'\0');
	printf("%f\n", b);
	printf("����2�� 2023213942 ���");
	return 0;
}








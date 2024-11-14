#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int(*parr)[10] = &arr;
	if (&arr == arr)
	{
		printf("hehe");
	}
	return 0;
}














































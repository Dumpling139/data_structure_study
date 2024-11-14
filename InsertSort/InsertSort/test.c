#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


void InsertSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int tmp = a[i];
		int end = i;
		while (end>0)
		{
			if (a[end-1] > tmp)
				a[end] = a[end-1];
			else
				break;
			end--;
		}
		a[end] = tmp;
	}
}



int main()
{
	int a[10] = { 2,6,3,8,9,1,0,4,7,5 };
	InsertSort(a, 10);
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}
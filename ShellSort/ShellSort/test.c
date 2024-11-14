#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


void ShellSort(int a[], int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = gap; i < n; i++)
		{
			int tmp = a[i];
			int end = i;
			while (end > gap - 1)
			{
				if (a[end - gap] > tmp)
					a[end] = a[end - gap];
				else
					break;
				end -= gap;
			}
			a[end] = tmp;
		}
	}
}

int main()
{
	int a[10] = { 2,6,3,8,9,1,0,4,7,5 };
	ShellSort(a, 10);
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}





#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define HeapType int

//向下调整
void Adjustdown(HeapType* a, int pos, int num)
{
	while (pos * 2 + 1 <= num-1)
	{
		int maxchild = pos * 2 + 1;
		if (maxchild == num-1)
			;
		else if (a[maxchild] < a[maxchild + 1])
			maxchild++;
		if (a[pos] < a[maxchild])
		{
			HeapType tmp = a[pos];
			a[pos] = a[maxchild];
			a[maxchild] = tmp;
			pos = maxchild;
		}
		else
			break;
	}
}



void Heapsort(HeapType* a, int num)
{
	//建堆
	for (int i = (num - 2) / 2; i >= 0; i--)
	{
		Adjustdown(a, i, num);
	}
	//排序
	for (int i = num - 1; i >= 0; i--)//6
	{
		HeapType tmp = a[i];
		a[i] = a[0];
		a[0] = tmp;
		Adjustdown(a, 0, i);
	}
}


int main()
{
	int a[10] = { 9,4,2,1,3,7,8,0,6,5 };
	Heapsort(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < sizeof(a)/sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
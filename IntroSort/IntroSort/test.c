#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//交换
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//向下调整
void Adjustdown(int* a, int pos, int num)
{
	while (pos * 2 + 1 <= num - 1)
	{
		int maxchild = pos * 2 + 1;
		if (maxchild == num - 1)
			;
		else if (a[maxchild] < a[maxchild + 1])
			maxchild++;
		if (a[pos] < a[maxchild])
		{
			int tmp = a[pos];
			a[pos] = a[maxchild];
			a[maxchild] = tmp;
			pos = maxchild;
		}
		else
			break;
	}
}

void Heapsort(int* a, int num)
{
	//建堆
	for (int i = (num - 2) / 2; i >= 0; i--)
	{
		Adjustdown(a, i, num);
	}
	//排序
	for (int i = num - 1; i >= 0; i--)//6
	{
		int tmp = a[i];
		a[i] = a[0];
		a[0] = tmp;
		Adjustdown(a, 0, i);
	}
}

//选择排序
void Choisesort(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		Swap(&a[min], &a[i]);
	}
}

void Quicksort2(int* a, int left, int right,int sum,int stop)
{
	if (left >= right)
		return;
	//小区间优化
	if (right - left < 10)
	{
		Choisesort(a + left, right - left + 1);
		return;
	}
	//递归深度大于stop，使用堆排序
	if (sum > stop)
	{
		Heapsort(a + left, right - left + 1);
	}
	//递归深度小于等于stop，使用快排
	int cur = left;
	int prev = left;
	int key = left;
	while (cur <= right)
	{
		if (a[cur] < a[key] && ++prev != cur)
			Swap(&a[prev], &a[cur]);
		cur++;
	}
	Swap(&a[prev], &a[key]);
	Quicksort2(a, left, prev - 1,sum+1,stop);
	Quicksort2(a, prev + 1, right,sum+1,stop);
}

void IntroSort(int* a, int n)
{
	//计算logn
	int logn = 0;
	while (logn * logn < n)
	{
		logn++;
	}
	//利用自省排序
	Quicksort2(a, 0, n - 1, 0, 2 * logn);
}




int main()
{
	srand((unsigned int)time(NULL));
	int a[20] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		a[i] = rand() % 10;
	}

	IntroSort(a, 20);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
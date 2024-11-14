#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"StackList.h"
//三数选择
int ThreeChoise(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] > a[mid])
	{
		if (a[mid] > a[right])
			return mid;
		else if (a[left] > a[right])
			return right;
		else
			return left;
	}
	else
	{
		if (a[mid] < a[right])
			return mid;
		else if (a[left] < a[right])
			return right;
		else
			return left;
	}
}
//交换
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
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


//第一种快速排序
//Hoare的写法
void Quicksort1(int* a, int left, int right)
{
	//小区间优化
	if (right - left < 10)
	{
		Choisesort(a+left, right - left+1);
		return;
	}

	if (left >= right)
		return;
	//正常的key
	//int key = left;
	//三数选key

	int key = ThreeChoise(a, left, right);
	Swap(&a[key], &a[left]);
	key = left;

	int begin = left;
	int end = right;
	while (left < right)
	{
		while (a[key] <= a[right] && left != right)
			right--;
		while (a[key] >= a[left] && left != right)
			left++;
		Swap(&a[left], &a[right]);
	}
	Swap(&a[key], &a[left]);
	Quicksort1(a, begin, left - 1);
	Quicksort1(a, left + 1, end);
}


//第二种快速排序
//写起来简单
void Quicksort2(int* a, int left, int right)
{
	if (left >= right)
		return;
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
	Quicksort2(a, left, prev - 1);
	Quicksort2(a, prev+1, right);
}

//第三种快速排序
//不需要递归
Quicksort3(int* a, int left, int right)
{
	StackNode* ST = CreateStack();
	StackPush(ST, left);
	StackPush(ST, right);
	while (!StackEmpty(ST))
	{
		int end = StackPop(ST);
		int begin = StackPop(ST);
		if (begin >= end)
			continue;
		int cur = begin;
		int prev = begin;
		int key = begin;
		while (cur <= end)
		{
			if (a[cur] < a[key] && ++prev != cur)
				Swap(&a[prev], &a[cur]);
			cur++;
		}
		Swap(&a[prev], &a[key]);
		StackPush(ST, begin);
		StackPush(ST, prev-1);
		StackPush(ST, prev+1);
		StackPush(ST, end);
	}

}

//三路划分快速排序
Quicksort4(int* a, int left, int right)
{
	if (left >= right)
		return;
	int key = a[left];
	int cur = left;
	int begin = left;
	int end = right;
	while (cur <= right)
	{
		if (a[cur] < key)
		{
			Swap(&a[cur], &a[left]);
			cur++;
			left++;
		}
		else if (a[cur] > key)
		{
			Swap(&a[cur], &a[right]);
			right--;
		}
		else
			cur++;
	}
	Quicksort4(a, begin, left-1);
	Quicksort4(a, right+1, end);
}



int main()
{
	srand((unsigned int)time(NULL));
	int a[20] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		a[i] = rand() % 10;
	}
	
	Quicksort4(a, 0, 19);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<malloc.h>
#include<stdlib.h>

//递归形式的归并排序
void _MergeSort1(int* a, int begin, int end,int* tmp)
{
	if (begin == end)
		return;
	int mid = (begin + end) / 2;
	int begin1 = begin, begin2 = mid + 1;
	int end1 = mid,end2 = end;
	_MergeSort1(a, begin, mid, tmp);
	_MergeSort1(a, mid+1, end, tmp);
	int i = 0;
	while (begin1 != end1+1 && begin2 != end2+1)
	{
		if (a[begin1] > a[begin2])
			tmp[i++] = a[begin2++];
		else
			tmp[i++] = a[begin1++];
	}
	while (begin1 != end1+1)
		tmp[i++] = a[begin1++];
	while (begin2 != end2+1)
		tmp[i++] = a[begin2++];
	memcpy(a + begin, tmp, i*sizeof(int));
}
//非递归的归并排序
void _MergeSort2(int* a, int begin, int end, int* tmp)
{
	for (int gap = 1; gap < end-begin+1; gap *= 2)
	{
		int begin1 = 0, end1 = begin1 + gap - 1;
		int begin2 = end1 + 1, end2 = begin2 + gap - 1;
		int j = 0;
		while (begin1 < end-begin+1)
		{
			if (end1 > end - begin + 1 || begin2 > end - begin + 1)
				break;
			if (end2 > end - begin + 1)
				end2 = end;
			int pos = begin1;
			int i = 0;
			while (begin1 != end1 + 1 && begin2 != end2 + 1)
			{
				if (a[begin1] > a[begin2])
					tmp[i++] = a[begin2++];
				else
					tmp[i++] = a[begin1++];
			}
			while (begin1 != end1 + 1)
				tmp[i++] = a[begin1++];
			while (begin2 != end2 + 1)
				tmp[i++] = a[begin2++];
			memcpy(a + pos, tmp, i * sizeof(int));
			begin1 = end2+1;
			end1 = begin1 + gap - 1;
			begin2 = end1 + 1;
			end2 = begin2 + gap - 1;
		}
	}
}


void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(n * sizeof(int));
	if (tmp == NULL)
		return;

	//_MergeSort1(a, 0, n - 1, tmp);
	_MergeSort2(a, 0, n - 1, tmp);

}




int main()
{
	srand((unsigned int)time(NULL));
	int a[20] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		a[i] = rand() % 10;
	}
	MergeSort(a, 20);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

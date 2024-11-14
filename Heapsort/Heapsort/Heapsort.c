#include"Heapsort.h"
//大堆
//降序
//向下调整
void Adjustdown(HeapType* a, int pos, int num)
{
	while (pos * 2 + 1 > num)
	{
		int maxchild = pos * 2 + 1;
		if (maxchild == num)
			;
		else if (a[maxchild] < a[maxchild + 1])
			maxchild++;
		HeapType tmp = a[pos];
		a[pos] = a[maxchild];
		a[maxchild] = tmp;
		pos = maxchild;
	}
}



void Heapsort(HeapType* a,int num)
{
	//建堆
	for (int i = (num - 2) / 2; i >= 0; i--)
	{
		Adjustdown(a, i, num);
	}
	//排序
	for (int i = num-1; i >= 0; i--)
	{
		HeapType tmp = a[i];
		a[i] = a[0];
		a[0] = tmp;
		Adjustdown(a, 0, num);
		num--;
	}
}
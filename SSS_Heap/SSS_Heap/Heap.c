#include"Heap.h"




void HeapInit(Heap* hp)
{
	hp->a = NULL;
	hp->capacity = 0;
	hp->size = 0;
}
// 堆的销毁
void HeapDestory(Heap* hp)
{
	free(hp->a);
	free(hp);
	hp = NULL;
}
// 堆的插入
void HeapPush(Heap* hp, HPDataType x)
{
	//扩容
	if (hp->size == hp->capacity)
	{
		int newcapacity = hp->size == 0 ? 4 : hp->capacity * 2;
		int* tmp = (int*)realloc(hp->a,newcapacity * sizeof(HPDataType));
		if (tmp == NULL)
		{
			perror("realloc error");
		}
		hp->a = tmp;
		hp->capacity = newcapacity;
	}
	//插入数据
	hp->a[hp->size] = x;
	//向上调整
	int child = hp->size;
	int parent = (child - 1) / 2;
	while (parent >= 0)
	{
		if (hp->a[child] > hp->a[parent])
		{
			HPDataType tmp = hp->a[child];
			hp->a[child] = hp->a[parent];
			hp->a[parent] = tmp;
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
	hp->size++;
}
// 堆的删除
void HeapPop(Heap* hp)
{
	assert(hp);
	//交换堆顶和堆底
	HPDataType tmp = hp->a[0];
	hp->a[0] = hp->a[hp->size - 1];
	hp->a[hp->size - 1] = tmp;
	hp->size--;
	//向下调整
	int parent = 0;
	int maxchild = parent * 2 + 1;
	while (maxchild <= hp->size - 1)
	{
		if (maxchild == hp->size - 1)
			;
		else if (hp->a[maxchild] < hp->a[maxchild + 1])
		{
			maxchild++;
		}
		if (hp->a[parent] < hp->a[maxchild])
		{
			HPDataType tmp = hp->a[parent];
			hp->a[parent] = hp->a[maxchild];
			hp->a[maxchild] = tmp;
			parent = maxchild;
			maxchild = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
// 取堆顶的数据
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->a[0];
}
// 堆的数据个数
int HeapSize(Heap* hp)
{
	return hp->size;
}
// 堆的判空
bool HeapEmpty(Heap* hp)
{
	return hp->size == 0;
}

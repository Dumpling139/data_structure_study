#include"Heap.h"




void HeapInit(Heap* hp)
{
	hp->a = NULL;
	hp->capacity = 0;
	hp->size = 0;
}
// �ѵ�����
void HeapDestory(Heap* hp)
{
	free(hp->a);
	free(hp);
	hp = NULL;
}
// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x)
{
	//����
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
	//��������
	hp->a[hp->size] = x;
	//���ϵ���
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
// �ѵ�ɾ��
void HeapPop(Heap* hp)
{
	assert(hp);
	//�����Ѷ��Ͷѵ�
	HPDataType tmp = hp->a[0];
	hp->a[0] = hp->a[hp->size - 1];
	hp->a[hp->size - 1] = tmp;
	hp->size--;
	//���µ���
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
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->a[0];
}
// �ѵ����ݸ���
int HeapSize(Heap* hp)
{
	return hp->size;
}
// �ѵ��п�
bool HeapEmpty(Heap* hp)
{
	return hp->size == 0;
}

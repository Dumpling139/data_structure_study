#include"Heap.h"



int main() {
	int a[10] = { 4,2,6,7,9,0,1,8,3,5 };
	Heap* hp = (Heap*)malloc(sizeof(Heap));
	if (hp == NULL)
	{
		perror("malloc error");
	}
	HeapInit(hp);
	for (int i = 0; i < 10; i++)
	{
		HeapPush(hp, a[i]);
	}
	while (HeapSize(hp) > 0)
	{
		printf("%d ", HeapTop(hp));
		HeapPop(hp);
	}
	printf("\n");
	printf("%d", HeapEmpty(hp));
	HeapDestory(hp);
	return 0;
}
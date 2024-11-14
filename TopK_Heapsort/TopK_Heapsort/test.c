#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>
void CreatNum()
{
	FILE* pf = fopen("C:\\Users\\16209\\Desktop\\random_number.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10000; i++)
	{
		fprintf(pf, "%d\n",rand()%1000);
	}
	fclose(pf);
	pf = NULL;
}

void AdjustDown(int* a, int pos, int size)
{
	while (pos * 2 + 1 <= size - 1)
	{
		int minchild = pos * 2 + 1;
		if (minchild == size - 1)
			;
		else if (a[minchild] > a[minchild + 1])
			minchild++;
		if (a[pos] > a[minchild])
		{
			int tmp = a[pos];
			a[pos] = a[minchild];
			a[minchild] = tmp;
			pos = minchild;
		}
		else
			break;
	}
}

void topk(int k)
{
	FILE* pf = fopen("C:\\Users\\16209\\Desktop\\random_number.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	//½¨¶Ñ
	int* a = (int*)malloc(k * sizeof(int));
	if (a == NULL)
	{
		perror("malloc error");
		return;
	}
	for (int i = 0; i < k; i++)
	{
		fscanf(pf, "%d", a + i);

	}
	for (int i = (k - 2) / 2; i >= 0; i--)
	{
		AdjustDown(a, i, k);
	}
	//±éÀú
	for (int i = k; i < 10000; i++)
	{
		int tmp = 0;
		fscanf(pf, "%d", &tmp);
		if (tmp > a[0])
		{
			a[0] = tmp;
			AdjustDown(a, 0, k);
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}
	fclose(pf);
	pf = NULL;
}

int main()
{
	CreatNum();
	topk(10);
	return 0;
}
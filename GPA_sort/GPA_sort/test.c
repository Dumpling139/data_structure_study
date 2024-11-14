#define _CRT_SECURE_NO_WARNINGS 1

#include"seqlist.h"
//½»»»
void Swap(SLTYPE* a, SLTYPE* b)
{
	SLTYPE* tmp = (SLTYPE*)malloc(sizeof(SLTYPE));
	if (tmp == NULL)
		return;
	strcpy(tmp->name, a->name);
	tmp->GPA = a->GPA;
	strcpy(a->name, b->name);
	a->GPA = b->GPA;
	strcpy(b->name, tmp->name);
	b->GPA = tmp->GPA;

}



//¿ìËÙÅÅÐò
void Quicksort(SL* a, int left, int right)
{
	if (left >= right)
		return;
	int cur = left;
	int prev = left;
	int key = left;
	while (cur <= right)
	{
		if ((a->sqlist+cur)->GPA > (a->sqlist + key)->GPA && ++prev != cur)
			Swap(a->sqlist + cur, a->sqlist + prev);
		cur++;
	}
	Swap(a->sqlist + prev, a->sqlist + key);
	Quicksort(a, left, prev - 1);
	Quicksort(a, prev+1, right);
}






int main()
{
	SL* sl =  SLCreate();
	SLPush(sl);
	Quicksort(sl, 0, sl->size - 1);
	SLPrint(sl);
	SLDestroy(sl);

	return 0;
}


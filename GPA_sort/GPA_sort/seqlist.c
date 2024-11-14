
#include"seqlist.h"
//变量的初始化
SL* SLCreate()
{
	SL* sl = (SL*)malloc(sizeof(SL));
	if (sl == NULL)
		return NULL;
	sl->size = 0;
	sl->capacity = 0;
	sl->sqlist = NULL;
	return sl;
}
//变量的销毁
void SLDestroy(SL* sl)
{
	free(sl->sqlist);
	sl->sqlist = NULL;
	sl->size =sl->capacity = 0;
}
//打印顺序表
void SLPrint(SL* sl)
{
	for (int i = 0; i < sl->size; i++)
	{
		printf("%d ",i+1);
		printf("%s ", (sl->sqlist + i)->name);
		printf("%.2f", (sl->sqlist+i)->GPA);
		printf("\n");
	}
	printf("\n");
}
//插入数据
//1.头插
void SLPush(SL* sl)
{
	while (1)
	{
		if (sl->size == sl->capacity)
		{
			int newcapacity = sl->capacity == 0 ? 4 : 2 * sl->capacity;
			SLTYPE* tmp = (SLTYPE*)realloc(sl->sqlist, newcapacity * sizeof(SLTYPE));
			if (tmp == NULL)
			{
				perror("realloc");
				exit(1);
			}
			sl->sqlist = tmp;
			sl->capacity = newcapacity;
		}
		scanf("%s %f", sl->sqlist[sl->size].name, &(sl->sqlist[sl->size].GPA));
		if (sl->sqlist[sl->size].GPA == 0)
			break;
		sl->size++;
	}

}
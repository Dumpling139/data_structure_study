
#include"seqlist.h"
//�����ĳ�ʼ��
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
//����������
void SLDestroy(SL* sl)
{
	free(sl->sqlist);
	sl->sqlist = NULL;
	sl->size =sl->capacity = 0;
}
//��ӡ˳���
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
//��������
//1.ͷ��
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
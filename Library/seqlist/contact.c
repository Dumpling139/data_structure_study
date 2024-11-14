#include"contact.h"
//���Һ���
int LIBFind1(LIB* lib)
{
	char tmp[NAME_MAX] = { 0 };
	scanf("%s", tmp);
	for (int i = 0; i < lib->size; i++)
	{
		if (!strcmp(tmp, lib->sqlist->name))
		{
			return i;
		}
	}
	return -1;

}
//��ֵ����
void LIBAss(SLTYPE* a, SLTYPE* b)
{
	for (int i = 0; i < NAME_MAX; i++)
		a->name[i] = b->name[i];
	a->price = b->price;
	for (int i = 0; i < NUM_MAX; i++)
		a->num[i] = b->num[i];
}


//��ʼ��
void LIBInit(LIB* lib)
{
	lib->size = 0;
	lib->capacity = 0;
	lib->sqlist = NULL;
}
//����
void LIBDestroy(LIB* lib)
{
	free(lib->sqlist);
	lib->sqlist = NULL;
	lib->size = lib->capacity = 0;
}
//�鿴
void LIBCheck(LIB* lib)
{
	printf("%d\n", lib->size);
	for (int i = 0; i < lib->size; i++)
	{
		printf("%s %s %.2f\n", lib->sqlist[i].num, lib->sqlist[i].name, lib->sqlist[i].price);
	}
}

//��ӡһ����
void BookPrint(LIB* lib, int a)
{
	printf("%s %s %.2f\n", lib->sqlist[a].num, lib->sqlist[a].name, lib->sqlist[a].price);
}



//����
void LIBAdd(LIB* lib)
{
	//���ж��Ƿ�Ҫ����
	do
	{
		if (lib->size == lib->capacity)
		{
			int newcapacity = lib->capacity == 0 ? 4 : 2 * lib->capacity;
			SLTYPE* tmp = (SLTYPE*)realloc(lib->sqlist, newcapacity * sizeof(SLTYPE));
			if (tmp == NULL)
			{
				perror("realloc");
				exit(1);
			}
			lib->sqlist = tmp;
			lib->capacity = newcapacity;
		}
		scanf("%s %s %f", (lib->sqlist + lib->size)->num, (lib->sqlist + lib->size)->name, &((lib->sqlist + lib->size)->price));
		lib->size++;
	} while (strcmp((lib->sqlist + lib->size-1)->num, "0") || strcmp((lib->sqlist + lib->size-1)->name, "0") || (lib->sqlist + lib->size-1)->price != 0);
	lib->size--;
}
//ɾ��
void LIBDel(LIB* lib)
{
	int pos = 0;
	scanf("%d", &pos);
	if (pos>=lib->size||pos<=0)
	{
		printf("��Ǹ������λ�÷Ƿ�!");
		return;
	}
	for (int i = pos-1; i < lib->size-1; i++)
	{
		LIBAss(lib->sqlist + i, lib->sqlist + i + 1);
	}
	lib->size--;
	LIBCheck(lib);
}

//�۸���޸�
void LIBVicePrice(LIB* lib)
{
	float sum = 0;
	for (int i = 0; i < lib->size; i++)
	{
		sum += (lib->sqlist+i)->price;
	}
	sum = sum / lib->size;
	for (int i = 0; i < lib->size; i++)
	{
		if ((lib->sqlist + i)->price < sum)
		{
			(lib->sqlist + i)->price *= 1.2;
		}
		else
		{
			(lib->sqlist + i)->price *= 1.1;
		}
	}
	printf("%.2f\n", sum);
	LIBCheck(lib);
}


//���������
void LIBTOP1(LIB* lib)
{
	int num = 0;
	float max = 0;
	for (int i = 0; i < lib->size; i++)
	{
		if (max < (lib->sqlist + i)->price)
		{
			max = (lib->sqlist + i)->price;
			num = 1;
		}
		else if (max == (lib->sqlist + i)->price)
		{
			num++;
		}
	}
	printf("%d\n", num);
	for (int i = 0; i < lib->size; i++)
	{
		if (max == (lib->sqlist + i)->price)
		{
			BookPrint(lib, i);
		}
	}
}


//�����鼮
void BookInsert(LIB* lib)
{
	int a = 1;
	scanf("%d", &a);
	if (a <= 0 || a > lib->size + 1)
	{
		printf("��Ǹ�����λ�÷Ƿ�!");
		return;
	}
	if (lib->size == lib->capacity)
	{
		int newcapacity = lib->capacity == 0 ? 4 : 2 * lib->capacity;
		SLTYPE* tmp = (SLTYPE*)realloc(lib->sqlist, newcapacity * sizeof(SLTYPE));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		lib->sqlist = tmp;
		lib->capacity = newcapacity;
	}
	for (int i = lib->size - 1; i >= a-1; i--)
	{
		LIBAss(lib->sqlist + i + 1, lib->sqlist + i);
	}
	scanf("%s %s %f", (lib->sqlist + a - 1)->num, (lib->sqlist + a - 1)->name, &((lib->sqlist + a - 1)->price));
	lib->size++;
	LIBCheck(lib);
	
}


void LIBAdd2(LIB* lib)
{
	//���ж��Ƿ�Ҫ����
	do
	{
		int flag = 0;
		SLTYPE* tmp2 = (SLTYPE*)malloc(sizeof(SLTYPE));
		scanf("%s %s %f", tmp2->num, tmp2->name, &(tmp2->price));
		for (int i = 0; i < lib->size; i++)
		{
			if (!strcmp((lib->sqlist + i)->num, tmp2->num))
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			continue;
		if (lib->size == lib->capacity)
		{
			int newcapacity = lib->capacity == 0 ? 4 : 2 * lib->capacity;
			SLTYPE* tmp = (SLTYPE*)realloc(lib->sqlist, newcapacity * sizeof(SLTYPE));
			if (tmp == NULL)
			{
				perror("realloc");
				exit(1);
			}
			lib->sqlist = tmp;
			lib->capacity = newcapacity;
		}
		strcpy((lib->sqlist + lib->size)->num, tmp2->num);
		strcpy((lib->sqlist + lib->size)->name, tmp2->name);
		(lib->sqlist + lib->size)->price = tmp2->price;
		lib->size++;
	} while (strcmp((lib->sqlist + lib->size - 1)->num, "0") || strcmp((lib->sqlist + lib->size - 1)->name, "0") || (lib->sqlist + lib->size - 1)->price != 0);
	lib->size--;
}







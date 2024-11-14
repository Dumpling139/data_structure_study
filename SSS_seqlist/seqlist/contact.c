#include"seqlist.h"
//���Һ���
int CTFind1(CT* ct)
{
	char tmp[NAME_MAX] = { 0 };
	scanf("%s", tmp);
	for (int i = 0; i < ct->size; i++)
	{
		if (!strcmp(tmp, ct->sqlist->name))
		{
			return i;
		}
	}
	return -1;

}
//��ֵ����
void CTAss(SLTYPE* a, SLTYPE* b)
{
	for (int i = 0; i < NAME_MAX; i++)
		a->name[i] = b->name[i];
	a->age = b->age;
	for (int i = 0; i < TEL_MAX; i++)
		a->tel[i] = b->tel[i];
	for (int i = 0; i < SEX_MAX; i++)
		a->sex[i] = b->sex[i];
	for (int i = 0; i < ADDR_MAX; i++)
		a->addr[i] = b->addr[i];
}
//��ʼ��
void CTInit(CT* ct)
{
	ct->size = 0;
	ct->capacity = 0;
	ct->sqlist = NULL;
}
//����
void CTDestroy(CT* ct)
{
	free(ct->sqlist);
	ct->sqlist = NULL;
	ct->size = ct->capacity = 0;
}
//�鿴
void CTCheck(CT* ct)
{
	printf("%-11s%-8s%-13s%-8s%-14s\n", "����", "����", "�绰", "�Ա�", "סַ");
	for (int i = 0; i < ct->size; i++)
	{
		printf("%-11s%-8d%-13s%-8s%-14s\n", ct->sqlist[i].name, ct->sqlist[i].age, ct->sqlist[i].tel, ct->sqlist[i].sex, ct->sqlist[i].addr);
	}
}
//����
void CTAdd(CT* ct)
{
	//���ж��Ƿ�Ҫ����
	if (ct->size == ct->capacity)
	{
		int newcapacity = ct->capacity == 0 ? 4 : 2 * ct->capacity;
		SLTYPE* tmp = (SLTYPE*)realloc(ct->sqlist, newcapacity * sizeof(SLTYPE));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		ct->sqlist = tmp;
	}
	printf("��������ϵ�˵�������\n");
	scanf("%s", (ct->sqlist+ct->size)->name);
	printf("��������ϵ�˵����䣺\n");
	scanf("%d", &(ct->sqlist+ ct->size)->age);
	printf("��������ϵ�˵ĵ绰��\n");
	scanf("%s", (ct->sqlist+ ct->size)->tel);
	printf("��������ϵ�˵��Ա�\n");
	scanf("%s", (ct->sqlist+ ct->size)->sex);
	printf("��������ϵ�˵ĵ�ַ��\n");
	scanf("%s", (ct->sqlist+ ct->size)->addr);
	ct->size++;
	CTSort(ct);
}
//ɾ��
void CTDel(CT* ct)
{
	printf("������Ҫɾ������ϵ�ˣ�\n");
	int pos = CTFind1(ct);
	if (pos == -1)
	{
		printf("�Ҳ�������ϵ�ˣ������Ƿ��������\n");
		return;
	}
	for (int i = pos; i < ct->size; i++)
	{
		CTAss(ct->sqlist + i, ct->sqlist + i + 1);
	}
	ct->size--;
	printf("ɾ���ɹ���\n");
}
//����
void CTFind(CT* ct)
{
	printf("��������Ҫ���ҵ���ϵ�ˣ�\n");
	int pos = CTFind1(ct);
	printf("%-11s%-8s%-13s%-8s%-14s\n", "����", "����", "�绰", "�Ա�", "סַ");
	printf("%-11s%-8d%-13s%-8s%-14s\n", ct->sqlist[pos].name, ct->sqlist[pos].age, ct->sqlist[pos].tel, ct->sqlist[pos].sex, ct->sqlist[pos].addr);
}
//�޸�
void CTVice(CT* ct)
{
	printf("������Ҫ�޸ĵ���ϵ�ˣ�\n");
	int pos = CTFind1(ct);
	if (pos == -1)
	{
		printf("�Ҳ�������ϵ�ˣ������Ƿ��������\n");
		return;
	}
	char type[8] = { 0 };
	printf("������Ҫ�޸ĵ��������ͣ�\n");
	scanf("%s", type);
	if (!strcmp(type, "����"))
	{
		printf("������Ҫ�޸ĵ�������\n");
		char tmp_name[NAME_MAX] = { 0 };
		scanf("%s", tmp_name);
		for (int i = 0; i < NAME_MAX; i++)
			(ct->sqlist+pos)->name[i] = tmp_name[i];
		CTSort(ct);
	}
	else if (!strcmp(type, "����"))
	{
		printf("������Ҫ�޸ĵ����䣺\n");
		int tmp_age = 0;
		scanf("%d", &tmp_age);
		(ct->sqlist+pos)->age = tmp_age;
	}
	else if (!strcmp(type, "�绰"))
	{
		printf("������Ҫ�޸ĵĵ绰��\n");
		char tmp_tel[TEL_MAX] = { 0 };
		scanf("%s", &tmp_tel);
		for (int i = 0; i < TEL_MAX; i++)
			(ct->sqlist+pos)->tel[i] = tmp_tel[i];
	}
	else if (!strcmp(type, "�Ա�"))
	{
		printf("������Ҫ�޸ĵ��Ա�\n");
		char tmp_sex[SEX_MAX] = { 0 };
		scanf("%s", tmp_sex);
		for (int i = 0; i < SEX_MAX; i++)
			(ct->sqlist+pos)->sex[i] = tmp_sex[i];
	}
	else if (!strcmp(type, "סַ"))
	{
		printf("������Ҫ�޸ĵ�סַ��\n");
		char tmp_addr[ADDR_MAX] = { 0 };
		scanf("%s", tmp_addr);
	}
	else
	{
		printf("�������\n");
	}
}
























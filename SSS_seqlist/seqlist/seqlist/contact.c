#include"seqlist.h"
//查找函数
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
//赋值函数
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
//初始化
void CTInit(CT* ct)
{
	ct->size = 0;
	ct->capacity = 0;
	ct->sqlist = NULL;
}
//销毁
void CTDestroy(CT* ct)
{
	free(ct->sqlist);
	ct->sqlist = NULL;
	ct->size = ct->capacity = 0;
}
//查看
void CTCheck(CT* ct)
{
	printf("%-11s%-8s%-13s%-8s%-14s\n", "姓名", "年龄", "电话", "性别", "住址");
	for (int i = 0; i < ct->size; i++)
	{
		printf("%-11s%-8d%-13s%-8s%-14s\n", ct->sqlist[i].name, ct->sqlist[i].age, ct->sqlist[i].tel, ct->sqlist[i].sex, ct->sqlist[i].addr);
	}
}
//增加
void CTAdd(CT* ct)
{
	//先判断是否要扩容
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
	printf("请输入联系人的姓名：\n");
	scanf("%s", (ct->sqlist+ct->size)->name);
	printf("请输入联系人的年龄：\n");
	scanf("%d", &(ct->sqlist+ ct->size)->age);
	printf("请输入联系人的电话：\n");
	scanf("%s", (ct->sqlist+ ct->size)->tel);
	printf("请输入联系人的性别：\n");
	scanf("%s", (ct->sqlist+ ct->size)->sex);
	printf("请输入联系人的地址：\n");
	scanf("%s", (ct->sqlist+ ct->size)->addr);
	ct->size++;
	CTSort(ct);
}
//删除
void CTDel(CT* ct)
{
	printf("请输入要删除的联系人：\n");
	int pos = CTFind1(ct);
	if (pos == -1)
	{
		printf("找不到此联系人，请检查是否输入错误。\n");
		return;
	}
	for (int i = pos; i < ct->size; i++)
	{
		CTAss(ct->sqlist + i, ct->sqlist + i + 1);
	}
	ct->size--;
	printf("删除成功！\n");
}
//查找
void CTFind(CT* ct)
{
	printf("请输入想要查找的联系人：\n");
	int pos = CTFind1(ct);
	printf("%-11s%-8s%-13s%-8s%-14s\n", "姓名", "年龄", "电话", "性别", "住址");
	printf("%-11s%-8d%-13s%-8s%-14s\n", ct->sqlist[pos].name, ct->sqlist[pos].age, ct->sqlist[pos].tel, ct->sqlist[pos].sex, ct->sqlist[pos].addr);
}
//修改
void CTVice(CT* ct)
{
	printf("请输入要修改的联系人：\n");
	int pos = CTFind1(ct);
	if (pos == -1)
	{
		printf("找不到此联系人，请检查是否输入错误。\n");
		return;
	}
	char type[8] = { 0 };
	printf("请输入要修改的数据类型：\n");
	scanf("%s", type);
	if (!strcmp(type, "姓名"))
	{
		printf("请输入要修改的姓名：\n");
		char tmp_name[NAME_MAX] = { 0 };
		scanf("%s", tmp_name);
		for (int i = 0; i < NAME_MAX; i++)
			(ct->sqlist+pos)->name[i] = tmp_name[i];
		CTSort(ct);
	}
	else if (!strcmp(type, "年龄"))
	{
		printf("请输入要修改的年龄：\n");
		int tmp_age = 0;
		scanf("%d", &tmp_age);
		(ct->sqlist+pos)->age = tmp_age;
	}
	else if (!strcmp(type, "电话"))
	{
		printf("请输入要修改的电话：\n");
		char tmp_tel[TEL_MAX] = { 0 };
		scanf("%s", &tmp_tel);
		for (int i = 0; i < TEL_MAX; i++)
			(ct->sqlist+pos)->tel[i] = tmp_tel[i];
	}
	else if (!strcmp(type, "性别"))
	{
		printf("请输入要修改的性别：\n");
		char tmp_sex[SEX_MAX] = { 0 };
		scanf("%s", tmp_sex);
		for (int i = 0; i < SEX_MAX; i++)
			(ct->sqlist+pos)->sex[i] = tmp_sex[i];
	}
	else if (!strcmp(type, "住址"))
	{
		printf("请输入要修改的住址：\n");
		char tmp_addr[ADDR_MAX] = { 0 };
		scanf("%s", tmp_addr);
	}
	else
	{
		printf("输入错误\n");
	}
}
























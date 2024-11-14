#define _CRT_SECURE_NO_WARNINGS 1

//通讯录的实现

#include<stdio.h>
#include<stdlib.h>
#include"seqlist.h"

void menu()
{
	printf("**************************************\n");
	printf("*****1.添加联系人    2.删除联系人*****\n");
	printf("*****3.查找联系人    4.修改联系人*****\n");
	printf("*****5.查看联系人    0.  退  出  *****\n");
	printf("**************************************\n");
}

int main()
{
	CT contect1;
	CTInit(&contect1);
	int choice = 1;
	do
	{
		menu();
		printf("请输入你要做的选项:\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:CTAdd(&contect1);
			break;
		case 2:CTDel(&contect1);
			break;
		case 3:CTFind(&contect1);
			break;
		case 4:CTVice(&contect1);
			break;
		case 5:CTCheck(&contect1);
			break;
		case 0:CTDestroy(&contect1);
			break;
		default:printf("输入错误，请重新输入:\n");
			break;
		}
	} while (choice);


	return 0;
}


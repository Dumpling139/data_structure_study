#define _CRT_SECURE_NO_WARNINGS 1

//ͨѶ¼��ʵ��

#include<stdio.h>
#include<stdlib.h>
#include"seqlist.h"

void menu()
{
	printf("**************************************\n");
	printf("*****1.�����ϵ��    2.ɾ����ϵ��*****\n");
	printf("*****3.������ϵ��    4.�޸���ϵ��*****\n");
	printf("*****5.�鿴��ϵ��    0.  ��  ��  *****\n");
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
		printf("��������Ҫ����ѡ��:\n");
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
		default:printf("�����������������:\n");
			break;
		}
	} while (choice);


	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>

#define NAME_MAX 11
#define TEL_MAX 13
#define SEX_MAX 5
#define ADDR_MAX 14
//ͨѶ¼����������
typedef struct
{
	char name[NAME_MAX];
	int age;
	char tel[TEL_MAX];
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
}PersonInfo;
//ǰ������
struct Seqlist;
typedef struct Seqlist CT;
//��ʼ��
void CTInit(CT* ct);
//����
void CTDestroy(CT* ct);
//�鿴
void CTCheck(CT* ct);
//����
void CTAdd(CT* ct);
//ɾ��
void CTDel(CT* ct);
//����
void CTFind(CT* ct);
//�޸�
void CTVice(CT* ct);




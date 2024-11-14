#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>

#define NAME_MAX 11
#define TEL_MAX 13
#define SEX_MAX 5
#define ADDR_MAX 14
//通讯录包含的类型
typedef struct
{
	char name[NAME_MAX];
	int age;
	char tel[TEL_MAX];
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
}PersonInfo;
//前置声明
struct Seqlist;
typedef struct Seqlist CT;
//初始化
void CTInit(CT* ct);
//销毁
void CTDestroy(CT* ct);
//查看
void CTCheck(CT* ct);
//增加
void CTAdd(CT* ct);
//删除
void CTDel(CT* ct);
//查找
void CTFind(CT* ct);
//修改
void CTVice(CT* ct);




#pragma once

#include<stdio.h>
#include<malloc.h>
#include<assert.h>
#include<stdbool.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}Heap;

void HeapInit(Heap* hp);
// �ѵ�����
void HeapDestory(Heap* hp);
// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x);
// �ѵ�ɾ��
void HeapPop(Heap* hp);
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp);
// �ѵ����ݸ���
int HeapSize(Heap* hp);
// �ѵ��п�
bool HeapEmpty(Heap* hp);
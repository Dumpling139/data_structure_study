#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<malloc.h>

#define Queuedatatype int
typedef struct Queuenode {
	Queuedatatype data;
	struct Queuenode* next;
}Qnode;
typedef struct Queue {
	Qnode* qhead;
	Qnode* qtail;
}Queue;
//��ʼ��
void Initqueue(Queue* pq);
//����
void Destoryqueue(Queue* pq);
//�����
void Pushqueue(Queue* pq, Queuedatatype a);
//������
void Popqueue(Queue* pq);
//�鿴��ͷ
Queuedatatype Topqueue(Queue* pq);
//��ӡ����
void Printqueue(Queue* pq);
// ��ȡ���ж�βԪ��
Queuedatatype Backqueue(Queue* pq);
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0
int QueueEmpty(Queue* pq);
// ��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* pq);
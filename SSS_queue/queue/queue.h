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
//初始化
void Initqueue(Queue* pq);
//销毁
void Destoryqueue(Queue* pq);
//入队列
void Pushqueue(Queue* pq, Queuedatatype a);
//出队列
void Popqueue(Queue* pq);
//查看队头
Queuedatatype Topqueue(Queue* pq);
//打印队列
void Printqueue(Queue* pq);
// 获取队列队尾元素
Queuedatatype Backqueue(Queue* pq);
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0
int QueueEmpty(Queue* pq);
// 获取队列中有效元素个数
int QueueSize(Queue* pq);
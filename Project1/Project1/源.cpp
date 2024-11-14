#include<assert.h>
#include<malloc.h>
#include<stdio.h>




typedef struct Queuenode {
	int data;
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
void Pushqueue(Queue* pq, int a);
//出队列
int Popqueue(Queue* pq);
//查看队头
int Topqueue(Queue* pq);
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0
int QueueEmpty(Queue* pq);

void Initqueue(Queue* pq) {
	assert(pq);
	pq->qhead = NULL;
	pq->qtail = NULL;
}

void Destoryqueue(Queue* pq) {
	assert(pq);
	while (pq->qhead)
	{
		Qnode* p = pq->qhead;
		pq->qhead = pq->qhead->next;
		free(p);
	}
	pq->qhead = NULL;
	pq->qtail = NULL;
}

void Pushqueue(Queue* pq, int a) {
	assert(pq);
	Qnode* tmp = (Qnode*)malloc(sizeof(Qnode));
	if (tmp == NULL)
	{
		perror("malloc error");
	}
	if (pq->qtail == NULL)
	{
		pq->qtail = tmp;
		pq->qhead = tmp;
	}
	else
	{
		pq->qtail->next = tmp;
		pq->qtail = pq->qtail->next;
	}
	pq->qtail->data = a;
	pq->qtail->next = NULL;
}

int Popqueue(Queue* pq)
{
	int a = 0;
	a = pq->qhead->data;
	assert(pq);
	if (pq->qhead == pq->qtail)
	{
		free(pq->qhead);
		pq->qhead = NULL;
		pq->qtail = NULL;
	}
	else
	{
		Qnode* tmp = pq->qhead;
		pq->qhead = pq->qhead->next;
		free(tmp);
	}
	return a;
}

int Topqueue(Queue* pq)
{
	assert(pq);
	assert(pq->qhead);
	return pq->qhead->data;
}

int QueueEmpty(Queue* pq)
{
	return !(bool)pq->qhead;
}



typedef struct {
	Queue* a;
	Queue* b;

} MyStack;


MyStack* myStackCreate() {
	Queue* a = (Queue*)malloc(sizeof(Queue));
	Queue* b = (Queue*)malloc(sizeof(Queue));
	Initqueue(a);
	Initqueue(b);
	MyStack* stack = (MyStack*)malloc(sizeof(MyStack));
	stack->a = a;
	stack->b = b;
	return stack;
}

void myStackPush(MyStack* obj, int x) {
	Pushqueue(obj->a, x);
}

int myStackPop(MyStack* obj) {
	if (QueueEmpty(obj->b))
	{
		while (!QueueEmpty(obj->a))
		{
			Pushqueue(obj->b, Topqueue(obj->a));
			Popqueue(obj->a);
		}
	}
	return Popqueue(obj->b);

}

int myStackTop(MyStack* obj) {
	if (QueueEmpty(obj->b))
	{
		while (!QueueEmpty(obj->a))
		{
			Pushqueue(obj->b, Topqueue(obj->a));
			Popqueue(obj->a);
		}
	}
	return Topqueue(obj->b);
}

bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(obj->a) || QueueEmpty(obj->b);
}

void myStackFree(MyStack* obj) {
	Destoryqueue(obj->a);
	Destoryqueue(obj->b);
	obj = NULL;
}




int main()
{
	MyStack* S = myStackCreate();
	myStackPush(S, 1);
	myStackPush(S, 2);
	int a = myStackTop(S);
	return 0;
}
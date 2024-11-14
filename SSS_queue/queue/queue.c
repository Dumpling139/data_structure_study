#include"queue.h"


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

void Pushqueue(Queue* pq, Queuedatatype a) {
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

void Popqueue(Queue* pq)
{
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
}

Queuedatatype Topqueue(Queue* pq)
{
	return pq->qhead->data;
}

void Printqueue(Queue* pq)
{
	Qnode* tmp = pq->qhead;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
}


Queuedatatype Backqueue(Queue* pq)
{
	return pq->qtail->data;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	Qnode* head = pq->qhead;
	int i = 1;
	while (1)
	{
		if (head == pq->qtail)
			return i;
		i++;
	}
}

int QueueEmpty(Queue* pq)
{
	return (int)pq->qhead;
}



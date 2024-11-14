#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<malloc.h>

typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;

ListNode* partition(ListNode* pHead, int x) {
	ListNode* bighead = (ListNode*)malloc(sizeof(ListNode));
	ListNode* smallhead = (ListNode*)malloc(sizeof(ListNode));
	ListNode* big = bighead;
	ListNode* small = smallhead;

	bighead->val = -1;
	smallhead->val = -1;
	ListNode* cur = pHead;
	while (cur)
	{
		if (cur->val >=x)
		{
			big->next = cur;
			big = big->next;
		}
		else
		{
			small->next = cur;
			small = small->next;
		}
		cur = cur->next;
	}
	big->next = NULL;
	small->next = bighead->next;
	return smallhead->next;
}
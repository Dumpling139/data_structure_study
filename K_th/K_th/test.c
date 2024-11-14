#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;

struct ListNode* FindKthToTail(struct ListNode* pHead, int k) {
	ListNode* fast = pHead, * slow = pHead;
	for (int i = 0; i < k; i++)
	{
		if (fast == NULL)
		{
			return NULL;
		}
		fast = fast->next;
	}
	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}
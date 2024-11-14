#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<malloc.h>

typedef struct ListNode {
	int val;
	struct ListNode* next;
	struct ListNode* random;
}ListNode;


struct ListNode* copyRandomList(struct ListNode* head) {
	ListNode* cur = head;
	if (!cur)
	{
		return NULL;
	}
	//创建复制节点
	while (cur)
	{
		ListNode* copy = (ListNode*)malloc(sizeof(ListNode));
		copy->next = cur->next;
		copy->val = cur->val;
		cur->next = copy;
		cur = cur->next->next;
	}
	cur = head;
	ListNode* copy = cur->next;
	while (cur)
	{
		copy = cur->next;
		if (!cur->random)
		{
			copy->random = NULL;
		}
		else
		{
			copy->random = cur->random->next;
		}
		cur = cur->next->next;
	}
	cur = head;
	copy = cur->next;
	ListNode* copyhead = cur->next;
	ListNode* next = copy->next;
	while (next)
	{
		cur->next = next;
		copy->next = next->next;
		cur = next;
		copy = cur->next;
		next = copy->next;
	}
	return copyhead;
}
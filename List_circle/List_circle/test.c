#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;

bool hasCycle(struct ListNode* head) {
	ListNode* fast = head, * slow = head;
	while (1)
	{
		if (fast == NULL || fast->next == NULL)
		{
			return false;
		}
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			return true;
		}
	}
}
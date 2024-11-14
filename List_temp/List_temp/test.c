#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;

int main()
{
	ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n2 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n3 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n4 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n5 = (ListNode*)malloc(sizeof(ListNode));
	n1->next = n2;
	n2->next = NULL;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;
	n1->val = 1;
	n2->val = 2;
	n3->val = 2;
	n4->val = 3;
	n5->val = 1;
	hasCycle(n1);
	return 0;
}

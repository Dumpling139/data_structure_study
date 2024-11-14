#include<stdio.h>
typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;

//struct ListNode* removeElements(struct ListNode* head, int val) {
//	ListNode * last = head;
//	ListNode* tmp = head;
//	if (last == NULL || (last->next == NULL && last->val == val))//如果是空链表或只有一个val的链表
//	{
//		return NULL;
//	}
//	else if (last->next == NULL)//如果只有一个节点且不等于val的链表
//	{
//		return head;
//	}
//	else
//	{
//		while (tmp != NULL)
//		{
//			if (tmp == last)
//			{
//				tmp = tmp->next;
//			}
//			if (tmp->val==val)
//			{
//				last->next = tmp->next;
//				tmp = tmp->next;
//			}
//			else
//			{
//				last = last->next;
//				tmp = tmp->next;
//			}
//		}
//		if (head->val == val)//如果第一个节点的元素就等于val
//		{
//			return head->next;
//		}
//		last->next = NULL;
//	}
//	return head;
//}

//struct ListNode* reverseList(struct ListNode* head) {
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	ListNode* pre = head->next;
//	head->next = NULL;
//	while (pre != NULL)
//	{
//		ListNode* tmp = pre->next;
//		pre->next = head;
//		head = pre;
//		pre = tmp;
//	}
//	return head;
//}

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//	if (list1 == NULL)//先解决其中存在空链表的情况
//	{
//		return list2;
//	}
//	else if (list2 == NULL)
//	{
//		return list1;
//	}
//	else
//	{
//		ListNode* pre = NULL;
//		ListNode* finnal = NULL;
//		if (list1->val <= list2->val)//初始化pre，确定新链表的的头节点finnal
//		{
//			finnal = list1;
//			pre = list1;
//			list1 = list1->next;
//		}
//		else
//		{
//			finnal = list2;
//			pre = list2;
//			list2 = list2->next;
//		}
//		while (list1 != NULL && list2 != NULL)//取元素到新的链表中
//		{
//			
//			if (list1->val <= list2->val)
//			{
//				pre->next = list1;
//				pre = list1;
//				list1 = list1->next;
//			}
//			else
//			{
//				pre->next = list2;
//				pre = list2;
//				list2 = list2->next;
//			}
//		}
//		if (list1 == NULL)
//		{
//			pre->next = list2;
//		}
//		else
//		{
//			pre->next = list1;
//		}
//		return finnal;
//	}
//}


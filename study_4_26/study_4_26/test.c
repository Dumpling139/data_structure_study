#include<stdio.h>
typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;

//struct ListNode* removeElements(struct ListNode* head, int val) {
//	ListNode * last = head;
//	ListNode* tmp = head;
//	if (last == NULL || (last->next == NULL && last->val == val))//����ǿ������ֻ��һ��val������
//	{
//		return NULL;
//	}
//	else if (last->next == NULL)//���ֻ��һ���ڵ��Ҳ�����val������
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
//		if (head->val == val)//�����һ���ڵ��Ԫ�ؾ͵���val
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
//	if (list1 == NULL)//�Ƚ�����д��ڿ���������
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
//		if (list1->val <= list2->val)//��ʼ��pre��ȷ��������ĵ�ͷ�ڵ�finnal
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
//		while (list1 != NULL && list2 != NULL)//ȡԪ�ص��µ�������
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


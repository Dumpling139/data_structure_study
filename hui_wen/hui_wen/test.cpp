#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


typedef struct ListNode {
    int val;
    struct ListNode *next;
}ListNode;

bool chkPalindrome(ListNode* A) {
    ListNode* fast = A;
    ListNode* slow = A;
    while (fast && fast->next)  //��ȡ�м���
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    ListNode* cur = slow; //��ת����
    ListNode* next = cur->next;
    ListNode* pre = slow;
    slow->next = NULL; //��ֹ�γɻ�����������
    while (next != NULL)
    {
        cur = next;
        next = next->next;
        cur->next = pre;
        pre = cur;
    }

    ListNode* head = A;
    ListNode* tail = cur;
    while (tail != slow)
    {
        if (head->val != tail->val)
            return false;
        tail = tail->next;
        head = head->next;
    }
    return true;
}
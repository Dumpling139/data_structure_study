#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


typedef struct ListNode {
    int val;
    struct ListNode *next;
}ListNode;

bool chkPalindrome(ListNode* A) {
    ListNode* fast = A;
    ListNode* slow = A;
    while (fast && fast->next)  //获取中间结点
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    ListNode* cur = slow; //反转链表
    ListNode* next = cur->next;
    ListNode* pre = slow;
    slow->next = NULL; //防止形成环！！！！！
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
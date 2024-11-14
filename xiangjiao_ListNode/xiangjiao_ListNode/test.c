#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

typedef struct ListNode {
      int val;
     struct ListNode *next;
}ListNode;

struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    int a = 0;
    int b = 0;
    ListNode* tmpa = headA;
    ListNode* tmpb = headB;
    while (tmpa->next != NULL)
    {
        tmpa = tmpa->next;
        a++;
    }
    while (tmpb->next != NULL)
    {
        tmpb = tmpb->next;
        b++;
    }
    if (tmpa != tmpb)
    {
        return NULL;
    }
    ListNode* short1 = headA;
    ListNode* long1 = headB;
    int num = b - a;
    if (b - a < 0)
    {
        ListNode* tmp = short1;
        short1 = long1;
        long1 = tmp;
        num *= -1;
    }
    for (int i = 0; i < num; i++)
    {
        long1 = long1->next;
    }
    while (long1!=short1)
    {
        long1 = long1->next;
        short1 = short1->next;
    }
    return long1;
}
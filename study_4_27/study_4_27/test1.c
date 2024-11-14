#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<assert.h>

//int main()
//{
//	int count = 0;
//	while (1)
//	{
//		int flag = 0;
//		int count1 = count;
//		for (int i = 0; i < 5; i++)
//		{
//			if (count1 % 5 == 1)
//			{
//				flag++;
//			}
//			count1 = 4 * (count1 - 1) / 5;
//		}
//		if (flag == 5)
//		{
//			break;
//		}
//		count++;
//	}
//	printf("%d", count);
//
//}


typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;
//struct ListNode* middleNode(struct ListNode* head) {
//	ListNode* fast = head;
//	ListNode* slow = head;
//	while (1)
//	{
//		if (fast == NULL || fast->next == NULL)
//		{
//			return slow;
//		}
//		fast = fast->next;
//		fast = fast->next;
//		slow = slow->next;
//	}
//
//}
//
//int ysf(int n, int m) {
//	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
//	assert(head);
//	head->val = 1;
//	head->next = head;
//	ListNode* pre = head;
//	for (int i = 2; i <=n; i++)
//	{
//		ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
//		newnode->next = head;
//		newnode->val = i;
//		pre->next = newnode;
//		pre = newnode;
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < m-1; j++)
//		{ 
//			pre = pre->next;
//		}
//		pre->next = pre->next->next;
//	}
//	return pre->val;
//}
//
//
//int main()
//{
//	printf("%d", ysf(43,9001));
//	return 0;
//}




//#include <stdio.h>  
//int fun(int sum)
//{
//
//	int  a, b, c;
//
//	for (int num = 100; num <= 999; num++)
//	{
//
//		c = num % 10;
//		b = (num % 100 - c) / 10;
//		a = (num - 10 * b - c) / 100;
//
//		if (sum == 122 * a + 212 * b + 221 * c)
//		{
//
//			return num;
//
//
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int sum;
//	printf("Input a sum:");
//	scanf("%d", &sum);
//	if (fun(sum) == -1)
//	{
//		printf("The sum you calculated is wrong!\n");
//	}
//	else
//	{
//		printf("The number is %d\n", fun(sum));
//	}
//	return 0;
//}





#include <stdio.h>
#include <math.h>
char call_times()
{
	static char a = 'A'-1;
	a = a + 1;
	return a;
}
int main()
{
	printf("%c", call_times());
	printf("%c", call_times());
	printf("%c", call_times());
	printf("%c", call_times());
	return 0;
}



//void test()
//{
//	int i = 0;//static修饰局部变量
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	for (int j = 0; j <= 5; j++)
//	{
//		test();
//	}
//	return 0;
//}
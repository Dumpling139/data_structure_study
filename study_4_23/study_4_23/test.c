#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int removeElement(int* nums, int numsSize, int val) {
//	//�������飬�ҵ�����val��Ԫ��
//	int i = 0;
//	while (i < numsSize)
//	{
//		if (*(nums + i) == val)
//		{
//			//ִ���м�ɾ
//			for (int j = i; j < numsSize - 1; j++)
//			{
//				*(nums + j) = *(nums + j + 1);
//			}
//			numsSize--;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return numsSize;
//}
//int removeElement(int* nums, int numsSize, int val) {
//	int* p1 = nums;
//	int* p2 = nums;
//	int tmp = numsSize;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (*(p1) == val)
//		{
//			p1++;
//			tmp--;
//		}
//		else
//		{
//			*(p2++) = *(p1++);
//		}
//	}
//	return tmp;
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//	//�ȴ���m=0ʱ�����
//	if (m == 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			*(nums1 + i) = *(nums2 + i);
//		}
//		return;
//	}
//	//�����ڶ�������
//	for (int i = 0; i < n; i++)
//	{
//		//�ж����ּ����ĸ�λ��
//		for (int j = 0; j < m; j++)
//		{
//
//			if (*(nums1 + m - 1) <= *(nums2 + i))
//			{
//				*(nums1 + m) = *(nums2 + i);
//				m++;
//				break;
//			}
//			if (*(nums1 + j) > *(nums2 + i))
//			{
//				for (int s = m - 1; s > j - 1; s--)
//				{
//					*(nums1 + s + 1) = *(nums1 + s);
//				}
//				*(nums1 + j) = *(nums2 + i);
//				m++;
//				break;
//			}
//		}
//	}
//}

//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//	//����ָ��ָ�������ĩβ
//	int p1 = m - 1;
//	int p2 = n - 1;
//	int p3 = m+n-1;
//	while (p1 >= 0 && p2 >= 0)
//	{
//		if (nums1[p1] >= nums2[p2])
//		{
//			nums1[p3--] = nums1[p1--];
//		}
//		else
//		{
//			nums1[p3--] = nums2[p2--];
//		}
//	}
//	//���p2�Ļ�û����
//	while (p2 >= 0)
//	{
//		nums1[p3--] = nums2[p2--];
//	}
//}

int main()
{
	int a[] = { 1,2,3,0,0,0 };
	int b[] = { 2,5,6 };
	merge(a, 4, 3, b, 4, 3);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a[] = { 1,2,3,3,4,5,6,7,8,9 };
//	int i = 0, count = 0, j = 0, tem = 0;
//	int size = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0; j < size - i; j++)
//		{
//			if (a[j]%2 == 0)
//			{
//				tem = a[size - i - 1];
//				a[size - i - 1] = a[j];
//				a[j] = tem;
//			}
//		}
//	}
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}



int main()
{
	char s1[] = { 'A','A','B','C','D' };
	int k = 0;
	int i = 0, j = 0;
	int size = sizeof(s1) / sizeof(s1[0]);
	char tem = 0;
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		tem = s1[size-1];
		for (j = 0; j < size-1; j++)
		{
			s1[size - j - 1] = s1[size - j - 2];
		}
		s1[0] = tem;
	}
	for (i = 0; i < size; i++)
	{
		printf("%c ", s1[i]);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	for (int i = 1; i <= 32; i++)
//	{
//		if (((a>>i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	for (int i = 1; i <= 32; i++)
//	{
//		if (((c >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int leng = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < leng; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < leng; j++)
//		{
//			if (a[i] == a[j] && i != j)
//			{
//				count++;
//			}
//		}
//		if (count==0)
//		{
//			printf("%d", a[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int leng = 0;
//	leng = sizeof(a) / sizeof(a[0]);
//	for (int i = leng; leng > 0; leng--)
//	{
//		printf("%d ", *(a + leng - 1));
//	}
//	return 0;
//}

//int main()
//{
//	char a[] = {'A','B','C','D'};
//	int leng = sizeof(a) / sizeof(a[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	for ( i = 0; i < leng; i++)
//	{
//		printf("%c", a[i] + k);
//	}
//	return 0;
//}


//size_t my_strlen(const char* str)
//{	
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//
//int main()
//{
//	char a[] = "abcde";
//	printf("%zd", my_strlen(a));
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	int leng = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < leng; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


int main()
{
	int arr[] = { 4,7,2,3,9,0,1,5,3,6,8 };
	int i = 0, j = 0, tem = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < size-1; i++)
	{
		int count = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
	int n = 0;
	for (n = 0; n < size; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}








































































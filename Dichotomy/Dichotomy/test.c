#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int bin_search(int arr[], int left, int right, int key)
{
	while (1)
	{
		int mid = (left + right) / 2;
		if (key == arr[left])
		{
			return left;
		}
		else if (key == arr[right])
		{
			return right;
		}
		if (arr[mid] > key)
		{
			right = mid;
		}
		else if (arr[mid] < key)
		{
			left = mid;
		}
		else
		{
			return mid;
		}
		if (left >= right-1)
		{
			return -1;
		}
	}
	
}
int main()
{
	int arr[] = { 11,12,13,14,15,16,17,18,19 };
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int left = 0;
	//printf("%d ",right);
	int key = 0;
	scanf("%d", &key);
	int mun = bin_search(arr, left, right, key);
	if (mun != -1)
	{
		printf("这个数是第%d个数", mun + 1);
	}
	else
	{
		printf("找不到这个数");
	}

	return 0;
}

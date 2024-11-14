#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//反转数组法
//void rotate(int* nums, int numsSize, int k) {
//	k %= numsSize;
//	int big = numsSize-k-1;
//	int small = 0;
//	while (small < big)
//	{
//		int tmp = nums[small];
//		nums[small] = nums[big];
//		nums[big] = tmp;
//		small++;
//		big--;
//	}
//	small = numsSize-k;
//	big = numsSize - 1;
//	while (small < big)
//	{
//		int tmp = nums[small];
//		nums[small] = nums[big];
//		nums[big] = tmp;
//		small++;
//		big--;
//	}
//	small = 0;
//	big = numsSize - 1;
//	while (small < big)
//	{
//		int tmp = nums[small];
//		nums[small] = nums[big];
//		nums[big] = tmp;
//		small++;
//		big--;
//	}
//}

//创建数组法

//void rotate(int* nums, int numsSize, int k) {
//	k = k % numsSize;
//	int arr[numsSize];
//	for (int i = 0; i < k; i++)
//	{
//		arr[i] = nums[numsSize - k + i];
//	}
//	for (int i = k; i < numsSize; i++)
//	{
//		arr[i] = nums[i - k];
//	}
//	for (int i = 0; i < numsSize; i++)
//	{
//		nums[i] = arr[i];
//	}
//}


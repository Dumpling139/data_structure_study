#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//求和法

int missingNumber(int* nums, int numsSize) {
	int num = 0;//所有数的和
	int num_nums = 0;//数组的和
	for (int i = 0; i <= numsSize; i++)
	{
		num += i;
	}
	for (int j = 0; j < numsSize; j++)
	{
		num_nums += nums[j];
	}
	return num - num_nums;
}

//异或法

int missingNumber(int* nums, int numsSize) {
	int num = 0;
	for (int i = 0; i <= numsSize; i++)//异或所有数
	{
		num ^= i;
	}
	for (int j = 0; j < numsSize; j++)//异或数组所有数
	{
		num ^= nums[j];
	}
	return num;
}
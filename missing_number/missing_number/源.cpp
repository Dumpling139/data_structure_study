#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��ͷ�

int missingNumber(int* nums, int numsSize) {
	int num = 0;//�������ĺ�
	int num_nums = 0;//����ĺ�
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

//���

int missingNumber(int* nums, int numsSize) {
	int num = 0;
	for (int i = 0; i <= numsSize; i++)//���������
	{
		num ^= i;
	}
	for (int j = 0; j < numsSize; j++)//�������������
	{
		num ^= nums[j];
	}
	return num;
}
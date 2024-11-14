#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int int_cmp(const void* p1, const void* p2)//int类型排序规则
{
	return *(int*)p1 - *(int*)p2;
}

void _cmp(char* px, char* py, int size)//交换函数
{
	for (int i = 0; i < size; i++)
	{
		char cmp = 0;
		cmp = *px;
		*px = *py;
		*py = cmp;
		px++;
		py++;
	}

}

void my_bubble(void* base, int count, int size, int (*cmp)(const void* p1, const void* p2))//排序函数
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - i - 1; j++)
		{
			//利用char类型的指针只有一个字节，交换每个字节上的数字，实现将任意大小的数值交换
			if (cmp((char*)base+j*size, (char*)base+(j+1)*size) > 0)
			{
				_cmp((char*)base + j * size, (char*)base + (j + 1) * size, size);//将交换的函数封装
			}
		}
	}

}





int main()//函数测试
{
	int arr[] = { 3,6,7,9,1,2,0,4,5,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	my_bubble(arr, sz, sizeof(arr[0]), int_cmp);
	
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
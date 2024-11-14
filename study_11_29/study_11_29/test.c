#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	printf("&arr[0] = %p\n", p);
//	printf("arr     = %p\n", p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{//输入数字
//		scanf("%d", p + i);//也可以写成arr[i]
//	}
//	for (int i = 0; i < sz; i++)
//	{//输出数字
//		printf("%d ", p[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{//输入数字
//		scanf("%d", &i[p]);
//	}
//	for (int i = 0; i < sz; i++)
//	{//输出数字
//		printf("%d ", i[arr]);
//	}
//	return 0;
//}


//void Print(int* arr)
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2=%d", sz2);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1=%d\n", sz1);
//	Print(arr);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//}

int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 2,3,4,5,6 };
	int arr3[5] = { 3,4,5,6,7 };
	int* parr[3] = { arr1,arr2,arr3 };
	//数组名是数组⾸元素的地址，类型是int* 的，就可以存放在parr数组中
	//后面就和二维数组没有区别
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
}












































































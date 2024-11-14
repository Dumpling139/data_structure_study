#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	float a = 90.5F;
//	printf("%f", a);
//	return 0;
//}

//int main()
//{
//	printf("input the value of x:");
//	int a = 0;
//	scanf("%d", &a);
//	if (a < 0)
//	{
//		a = -a;
//	}
//	printf("|x|=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a[5] = { 10,20,30,40,50 };
//	int i = 4;
//	for (i = 4; i >=0; i--)
//	{
//		printf("\ta[%d]=%d,", a[i]);
//	}
//	return 0;
//}

//void move(int arr[], int x)
//{
//	int i = x;
//	int m = arr[x-1];
//	for (i = x-1; i >0; i--)
//	{
//		arr[i] = arr[i-1];
//		
//	}
//	arr[0] = m;
//}
//
//int main()
//{
//	int arr[6] = { 0 };
//	int i = 0;
//	int leng = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < leng; i++)
//	{
//		scanf("%d ", &(arr[i]));
//	}
//
//	for ( i = 0; i < 6; i++)
//	{
//		int j = 0;
//		for (j = 0; j < leng; j++)
//		{
//			printf("%d ", arr[j]);
//		}
//		printf("\n");
//		move(arr, leng);
//		
//	}
//	return 0;
//}


//int main()
//{
//	printf("Please enter requried terms (<=10):");
//	int n = 0, m = 0;
//	scanf("%d%d", &n, &m);
//	printf("                             their sum:");
//	printf("There are following possible series:\n");
//	int arr[10] = { 0 };
//	int i = 0;
//	int count = 1;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 1;
//	}
//	arr[0] = m - n + 1;
//	int a1 = 0;
//	for (a1 = 0; a1 < n; a1++)
//	{
//		int a2 = 0;
//		
//	}
//	return 0;
//}



//for (a2 = 0; a2 <= a1; a2++)
//{
//	printf("[%d]:", count);
//	int c = 0;
//	for (c = 0; c < n; c++)
//	{
//		printf("%d", arr[c]);
//	}
//	printf("\n");
//	arr[a2]--;
//	arr[a2 + 1]++;
//	if ((arr[a2] - arr[a2 + 1]) <= 1)
//	{
//		break;
//	}
//	count++;
//}
//


//int main()
//{
//	int arr[30] = { 0 };
//	int i = 0;
//	for (i = 0; i < 30; i++)
//	{
//		arr[i] = 2 * i + 2;
//	}
//	int arr2[6] = { 0 };
//	int j = 0;
//	for (j = 0; j < 6; j++)
//	{
//		int s = 0;
//		int sum = 0;
//		for (s = 0; s < 5; s++)
//		{
//			sum += arr[j*5 + s];
//		}
//		arr2[j] = sum / 5;
//		printf("%6d", arr2[j]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("Input 20 Numbers:\n");
//	int arr[20] = { 0 };
//	int i = 0;
//	int sum = 0;
//	int count = 0;
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 20; i++)
//	{
//		if (arr[i] >= 0)
//		{
//			sum += arr[i];
//			count++;
//		}
//	}
//	printf("sum = %d, counter = %d\n", sum, count);
//	return 0;
//}


//int main()
//{
//	int arr[8] = { 0 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		if (arr[i] == arr[7 - i])
//		{
//			count++;
//		}
//	}
//	if (count == 4)
//	{
//		printf("yes,it is\n");
//	}
//	else
//	{
//		printf("no,it is not\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("Please input ten integers:\n");
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	double s = (double)sum / 10;
//	printf("The mean value is %.2f\n", s);
//	return 0;
//}



//#include <stdio.h>
//#define N 10; 
//int main()
//{
//    int a[10] = { 2,17,8,3,24,53,82,1,29,101 };
//    int i, j, k, t;
//    for (i = 0; i < 10; i++)
//    {
//        k = i;
//        for (j = 0; j < 10-i-1; j++)
//        {
//            if (a[j] < a[j + 1])
//            {
//                t = a[j+1];
//                a[j+1] = a[j];
//                a[j] = t;
//            }
//        }
//    }
//    for (i = 0; i < 10; i++)
//        printf("%d ", a[i]);
//    return 0;
//}
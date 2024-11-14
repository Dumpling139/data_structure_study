#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int power(int x, int n)
{
	int i;
	int s = 1;

	for (i = 1; i <= n; i++)
		s *= x;

	return s;
}
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


int main()
{
	int sum = 0,money = 0;
	scanf("%d", &money);
	sum = money+money/2;
	printf("%d", sum);
	return 0;
}

//int main()
//{
//	printf("      *      \n");
//	printf("     ***     \n");
//	printf("    *****    \n");
//	printf("   *******   \n");
//	printf("  *********  \n");
//	printf(" *********** \n");
//	printf("*************\n");
//	printf(" *********** \n");
//	printf("   *******   \n");
//	printf("    *****    \n");
//	printf("     ***     \n");
//	printf("      *      \n");
//	return 0;
//}
//int main()
//{
//	for (int i = 1;i<=100000; i++)
//	{
//		int bit = 0, i1 = i, sum = 0;
//		while (i1)
//		{
//			i1 = i1 / 10;
//			bit++;
//
//		}
//		for (int i2 = i; i2; i2 = i2 / 10)
//		{
//			sum += power(i2 % 10, bit);
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}

//int main()
//{	
//	int a = 0;
//	scanf("%d", &a);
//	
//	int b = a + a * 10 + a * 100 + a * 1000 + a * 10000;
//	int s = 0;
//	for (; b; b /= 10)
//	{
//		s += b;
//	}
//	printf("%d", s);
//	return 0;
//}
//int mian()
//{
//
//	return 0;
//}
//int mian()
//{
//
//	return 0;
//}
//int mian()
//{
//
//	return 0;
//}

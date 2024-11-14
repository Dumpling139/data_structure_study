#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
double myPOW(int x, int n)
{
	double sum = 1;
	for (int i = 0; i < n; i++)
	{
		sum *= x;
	}
	return sum;
}

int main()
{
	printf("Enter x and n\n");
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	printf("mypow(%d,%d) = %.2lf",a,b, myPOW(a, b));
	return 0;
}
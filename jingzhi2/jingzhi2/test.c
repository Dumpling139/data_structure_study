#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int sca(a)
{
	int sum = 0;
	for(int i=0; a!= 0;i++)
	{
		sum += a % 10*(int)pow(8,i);
		a /= 10;
	}
	return sum;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int c = sca(a);
	printf("%d", c);
	return 0;
}
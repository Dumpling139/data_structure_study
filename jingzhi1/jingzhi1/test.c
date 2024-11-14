#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int sca(a) {
	if (a<9 && a>-9)
		return a;
	else
		return 8 * sca(a / 10) + a % 10;
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	int c = sca(a);
	printf("%d", c);
	return 0;
}
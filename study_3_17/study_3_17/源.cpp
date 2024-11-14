

#include<stdio.h>
int main(void)
{
	double x, y;
	printf("Please input fahr:\n ");
	scanf_s("%lf", &x);
	y = 9.0 * x / 5.0 + 32.0;
	printf("The cels is: %.2f", y);
}
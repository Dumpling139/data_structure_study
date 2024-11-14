
#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "ÄÐÐÔ";
	char b[10] = "Å®ÐÔ";
	int c = strcmp(a, b);
	printf("%s", a);
	return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "����";
	char b[10] = "Ů��";
	int c = strcmp(a, b);
	printf("%s", a);
	return 0;
}
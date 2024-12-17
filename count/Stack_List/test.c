#define _CRT_SECURE_NO_WARNINGS 1
#include"count.h"
#include<stdio.h>
#include<string.h>


int main()
{
	while (1)
	{
		char a[100] = { 0 };
		scanf("%s", a);
		if (a[0] == '=')
			break;
		a[strlen(a) - 1] = '\0';
		float b = Count(a, '\0');
		printf("%.2f\n", b);
	}
	printf("Íø¹¤2°à 2023213942 Àî¿¡Îõ");
	return 0;
}








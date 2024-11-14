#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct _iobuf {
//	char* _ptr;
//	int _cnt;
//	char* _base;
//	int _flag;
//	int _file;
//	int _charbuf;
//	int _bufsiz;
//	char* _tmpfname;
//};
//typedef struct _iobuf FILE;

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf != NULL)
//	{
//		fputs("hello world", pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	printf("%s", str);
//	return 0;
//}
#include<stdio.h>

int main()
{
	char a = 0;
	FILE* pf = fopen("test.txt", "r");
	if (pf != NULL)
	{
		while ( fgetc(pf)!=EOF)
		{
			a = fgetc(pf);
			putchar(a);
		}
		fclose(pf);

	}
	printf("\n");
	pf = NULL;
	return 0;
}
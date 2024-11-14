#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	char a[5] = { 'x','x','x','x','x'};
//	fgets(a, 4,pf);//最多打印3个
//	printf("%s", a);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "a");
//	char a[] = "abcd";
//	fputs(a, pf);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test,txt", "r");
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	c=fscanf(pf,"%c", &b);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	char a = 1;
//	while ((a = fgetc(pf)) != EOF)
//	{
//		putchar(a);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	char b[] = "hello world";
//	char a = 1;
//	int i = 0;
//	while ((a = b[i]) != '\0')
//	{
//		fputc(a, pf);
//		i++;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	char a[5] = { 'x','x','x','x','x' };
//	fgets(a, 4, pf);//最多打印3个
//	printf("%s", a);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	char a[] = "abcd";
//	fputs(a, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char a='a';
//	fscanf(pf, "%c ", &a);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int a = 10;
//	char b = 'a';
//	float c = 3.14159;
//	fprintf(pf, "%d %c %f", a, b, c);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fscanf(pf, "%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fread(&a[i], sizeof(int), 1, pf);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = ("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("hello world", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int a = fgetc(pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int a[10] = {0};
//	int b = fread(&a, sizeof(int), 10, pf);
//	return 0;
//}


//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	if (pFile == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("This is an apple.", pFile);
//	int b = fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	pFile = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pFile;
//	long size;
//	pFile = fopen("myfile.txt", "rb");
//	if (pFile == NULL)
//		perror("Error opening file");
//	else
//	{
//		fseek(pFile, 0, SEEK_END);
//		size = ftell(pFile);
//		fclose(pFile);
//		pFile = NULL;
//		printf("Size of myfile.txt: %ld bytes.\n", size);
//	}
//
//	return 0;
//}

//int main()
//{
//	int n;
//	FILE* pFile;
//	char buffer[27];
//
//	pFile = fopen("myfile.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//		fputc(n, pFile);
//	rewind(pFile);
//
//	fread(buffer, 1, 26, pFile);
//	fclose(pFile);
//
//	buffer[26] = '\0';
//	printf(buffer);
//	return 0;
//}

//enum { SIZE = 5 };
//int main(void) {
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // 必须⽤⼆进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
//	if (ret_code == SIZE) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt⽂件，发现⽂件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到⽂件（磁盘）
//	//注：fflush 在⾼版本的VS上不能使⽤了
//	printf("再睡眠10秒-此时，再次打开test.txt⽂件，⽂件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭⽂件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}

#include <stdio.h>
int main()
{
    char op;
    int a, b;
    printf("Please enter an expression:");
    scanf("%d%c%d", &a, &op, &b);
    switch (op)
    {
    case '+':printf("%d + %d = %d \n", a, op, b); break;
    case '-':printf("%d - %d = %d \n", a, op, b); break;
    case '*':printf("%d * %d = %d \n", a, op, b); break;
    case '\\':printf("Invalid operator! \n");break;
    }
    if (b == 0)
    {
        printf("Division by zero!\n");
    }
    else if (b != 0)
    {
        printf("%d / %d = %d \n", a, op, b);
    }
    return 0;

}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//size_t my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//		count++;
//	return count;
//}
//int main()
//{
//	printf("%zd", my_strlen("hello"));
//	return 0;
//}

//char* my_strcpy(char* des, const char* sou)
//{
//	char* ret = des;
//
//	assert(des != NULL);
//	assert(sou != NULL);
//
//	while(*sou)
//		*des++ = *sou++;
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "xxxxxxxxxxxxxxxxxx";
//	char str2[] = "hello world";
//
//	my_strcpy(str1, str2);
//
//	printf("%s", str1);
//
//	return 0;
//}


//int my_strcmp(char* a, char* b)
//{
//	while (*a++ = *b++)
//	{
//		;
//	}
//	return a - b;
//}
//
//int main()
//{
//	char a[] = "abcdef";
//	char b[] = "abcdej";
//	int c = my_strcmp(a, b);
//	if (c > 0)
//	{
//		printf("a大");
//	}
//	else if (c < 0)
//	{
//		printf("b大");
//	}
//	else
//	{
//		printf("一样大");
//	}
//	return 0;
//}



char* my_strcat(char* des,char* sou)
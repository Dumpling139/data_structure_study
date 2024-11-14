#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	while (str[i])
//	{
//		if (str[i] >= 97 && str[i] <= 123)
//		{
//			str[i] -= 32;
//		}
//		i++;
//	}
//	printf("%s\n", str);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	while (str[i])
//	{
//		if (islower(str[i]))
//		{
//			str[i] -= 32;
//		}
//		i++;
//	}
//	printf("%s\n", str);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c = 0;
//	while (str[i])
//	{
//		 c = str[i];
//		if (islower(str[i]))
//		{
//			c = toupper(c);
//		}
//		putchar(c);
//		i++;
//	}
//	return 0;
//}

//size_t my_strlen(char* str)
//{
//	char* p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//
//}
//
//
//
//int main()
//{
//	char a[] = "abcdefg";
//	printf("%zd", my_strlen(a));
//	return 0;
//}



//char* my_strcpy(char* des, const char* sou)
//{
//	char* p = des;
//
//	assert(des != NULL);
//	assert(sou != NULL);
//
//	while (*des++ = *sou++)
//	{
//		;
//	}
//	return p;
//}
//
//
//int main()
//{
//	char arr1[20] = { "xxxxxxxxxxxxxxxxxxx"};
//	char arr2[] = { "hello world" };
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//
//int main()
//{
//
//	char a[20] = { "hello " };
//	char b[] = { "world" };
//
//	strcat(a, b);
//	printf("%s\n", a);
//
//	return 0;
//}






//char* my_strcat( char* des, char* sou)
//{
//	char* p = sou;
//
//	while (*des)
//	{
//		des++;
//	}
//	while (*des++=*sou++)
//	{
//		;
//	}
//	return sou;
//
//}
//
//
//
//int main()
//{
//
//	char a[20] = { "hello " };
//	char b[] = { "world" };
//
//	my_strcat(a, b);
//	printf("%s\n", a);
//
//	return 0;
//}








//int main()
//{
//
//	char a[] = { "abcde" };
//	char b[] = { "abcdf" };
//
//	int c = strcmp(a, b);
//	if (c > 0)
//	{
//		printf("大");
//	}
//	else if (c < 0)
//	{
//		printf("小");
//	}
//	else
//	{
//		printf("一样大");
//	}
//	return 0;
//}


//int my_strcmp(char* a, char* b)
//{
//	while (*a++ == *b++)
//	{
//		;
//	}
//	return a - b;
//}
//
//int main()
//{
//
//	char a[] = { "abcde" };
//	char b[] = { "abcdf" };
//
//	int c = my_strcmp(a, b);
//	if (c > 0)
//	{
//		printf("大");
//	}
//	else if (c < 0)
//	{
//		printf("小");
//	}
//	else
//	{
//		printf("一样大");
//	}
//	return 0;
//}



//int main()
//{
//
//	char a[] = {"abcdefg"};
//	char b[] = { "def" };
//	char* pc = strstr(a, b);
//	strncpy(pc, "daf", 3);
//	printf("%s", a);
//
//	return 0;
//}


//char* my_strstr(char* a, char* b)
//{
//	char* ret = a;
//	char* b1 = b;
//	while (*ret)
//	{
//		char* a1 = ret;
//		while (*a1 == *b1&&*a1)
//		{
//			
//			a1++;
//			b1++;
//			if (!*b1)
//			{
//				return ret;
//			}
//
//		}
//		ret++;
//	}
//	return NULL;
//}
//
//int main()
//{
//
//	char a[] = { "abcdefg" };
//	char b[] = { "abcdefg" };
//
//	char* pc = my_strstr(a, b);
//
//	strncpy(pc, "daf", 3);
//	printf("%s", a);
//
//	return 0;
//}


//int main()
//{
//	char a[] = { "acb.528*890@.com" };
//	char b[] = { ".@*" };
//	char* ret = NULL;
//
//	for (ret = strtok(a, b); ret; ret = strtok(NULL, b))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%s\n", strerror(i));
//	}
//	return 0;
//}


//int main()
//{
//	float a = 1;
//	printf("%.2f\n", a);
//	return 0;
//}


//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        float max = 0, min = 100, sum = 0;
//        float a;
//        for (int i = 0; i <= n; i++)
//        {
//            scanf("%f", &a);
//            if (max < a)
//            {
//                max = a;
//            }
//            if (min > a)
//            {
//                min = a;
//            }
//            sum += a;
//        }
//        printf("%.2f %.2f %.2f", max, min, sum / n);
//    }
//    return 0;
//}

//int main() {
//    int n=0;
//        float max = 0, min = 100, sum = 0;
//        float a;
//        for (int i = 0; i <= n; i++)
//        {
//            scanf("%f", &a);
//            if (max < a)
//            {
//                max = a;
//            }
//            if (min > a)
//            {
//                min = a;
//            }
//            sum += a;
//        }
//        printf("%.2f %.2f %.2f", max, min, sum / n);
//    return 0;
//}



































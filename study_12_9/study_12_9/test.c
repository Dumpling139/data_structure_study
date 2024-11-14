#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof a);
//	return 0;
//}
//
//
//
//size_t strlen (const char  * str );
//
//
//int main()
//{
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	
//	printf("%zd\n", sizeof(arr1));
//	printf("%zd\n", sizeof(arr2));
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));
//	//a是数组名sizeof(数组名)代表计算数组的长度，结果为16
//	printf("%zd\n", sizeof(a + 0));
//	//a是数组名，没有出现sizeof(数组名)或&(数组名)的情况（特殊情况），所以代表的是首元素的地址，+0后还是首元素的地址，sizeof(地址)的结果为4或8
//	printf("%zd\n", sizeof(*a));
//	//没有出现特殊情况，a代表首元素的地址*a就代表首元素，所以结果是4
//	printf("%zd\n", sizeof(a + 1));
//	//没有出现特殊情况，a+1代表第二个元素的地址，所以结果是4或8
//	printf("%zd\n", sizeof(a[1]));
//	//没有出现特殊情况，a[1]代表第二个元素，所以结果是4
//	printf("%zd\n", sizeof(&a));
//	//出现了&(数组名)的情况，&a代表整个数组的地址，整个数组的地址也是地址，所以结果是4或8
//
//	printf("%zd\n", sizeof(*&a));
//	//*&a相当于a。出现了sizeof(数组名)的情况，代表计算数组的长度，结果为16
//	printf("%zd\n", sizeof(&a + 1));
//	//出现了&(数组名)的情况，&a+1代表整个数组后的地址，所以结果是4或8
//	printf("%zd\n", sizeof(&a[0]));
//	//没有出现特殊情况，a[0]代表首元素，&a[0]代表首元素的地址，所以结果是4或8
//	printf("%zd\n", sizeof(&a[0] + 1));
//	//没有出现特殊情况，&a[0]代表首元素的地址，&a[0]+1代表第二个元素的地址，所以结果是4或8
//
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%zd\n", sizeof(arr));
//	//出现了sizeof(数组名)的情况，代表计算数组的长度，结果为6
//	printf("%zd\n", sizeof(arr + 0));
//	//没有出现特殊情况，arr代表首元素的地址，所以结果是4或8
//	printf("%zd\n", sizeof(*arr));
//	//没有出现特殊情况，*arr代表首元素，所以结果是1
//	printf("%zd\n", sizeof(arr[1]));
//	//没有出现特殊情况，arr[1]代表第二个元素，所以结果是1
//	printf("%zd\n", sizeof(&arr));
//	//出现了&(数组名)的情况，&arr代表整个数组的地址，整个数组的地址也是地址，所以结果是4或8
//	printf("%zd\n", sizeof(&arr + 1));
//	//出现了&(数组名)的情况，&a+1代表整个数组后的地址，所以结果是4或8
//	printf("%zd\n", sizeof(&arr[0] + 1));
//	//没有出现特殊情况，&arr[0]代表首元素的地址，&arr[0]+1代表第二个元素的地址，所以结果是4或8
//
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));
//	//arr是首元素的地址，数组中没有\0，因此结果是随机值
//	printf("%d\n", strlen(arr + 0));
//	//arr+0是首元素的地址，数组中没有\0，因此结果是随机值
//	printf("%d\n", strlen(*arr));
//	//*arr是首元素，但是strlen要求输入地址，因此结果会发生错误
//	printf("%d\n", strlen(arr[1]));
//	//arr[1]是第二个元素，但是strlen要求输入地址，因此结果会发生错误
//	printf("%d\n", strlen(&arr));
//	//出现了& (数组名)的情况，& arr代表整个数组的地址，数组中没有\0，因此结果是随机值
//	printf("%d\n", strlen(&arr + 1));
//	//出现了& (数组名)的情况，& arr+1代表整个数组之后的地址，不一定有没有\0,因此结果是随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//&arr[0]代表首元素的地址，&arr[0] + 1代表第二个元素的地址，数组中没有\0，因此结果是随机值
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";//数组中共有七个元素：a、b、c、d、e、f、\0
//
//	printf("%zd\n", sizeof(arr));
//	//出现了sizeof(数组名)的情况，代表计算数组的长度，所以结果为7
//	printf("%zd\n", sizeof(arr + 0));
//	//没有出现特殊情况，arr代表首元素的地址，所以结果是4或8
//	printf("%zd\n", sizeof(*arr));
//	//没有出现特殊情况，*arr代表首元素，所以结果是1
//	printf("%zd\n", sizeof(arr[1]));
//	//没有出现特殊情况，arr[1]代表第二个元素，所以结果是1
//	printf("%zd\n", sizeof(&arr));
//	//出现了&(数组名)的情况，&arr代表整个数组的地址，整个数组的地址也是地址，所以结果是4或8
//	printf("%zd\n", sizeof(&arr + 1));
//	//出现了&(数组名)的情况，&a+1代表整个数组后的地址，所以结果是4或8
//	printf("%zd\n", sizeof(&arr[0] + 1));
//	//没有出现特殊情况，&arr[0]代表首元素的地址，&arr[0]+1代表第二个元素的地址，所以结果是4或8
//
//	return 0;
//}




//int main()
//{
//	char arr[] = "abcdef";//数组中共有七个元素：a、b、c、d、e、f、\0
//
//	printf("%d\n", strlen(arr));
//	//没有出现特殊情况，arr代表首元素的地址，strlen从首元素开始计算，直到遇见\0，所以结果为6
//	printf("%d\n", strlen(arr + 0));
//	//没有出现特殊情况，arr+0代表首元素的地址，所以结果为6
//	//printf("%d\n", strlen(*arr));
//	//*arr是首元素，但是strlen要求输入地址，因此结果会发生错误
//	//printf("%d\n", strlen(arr[1]));
//	//arr[1]是第二个元素，但是strlen要求输入地址，因此结果会发生错误
//	printf("%d\n", strlen(&arr));
//	//出现了& (数组名)的情况，& arr代表整个数组的地址，数组中没有\0，因此结果是随机值
//	printf("%d\n", strlen(&arr + 1));
//	//出现了& (数组名)的情况，& arr+1代表整个数组之后的地址，不一定有没有\0,因此结果是随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//&arr[0]代表首元素的地址，&arr[0] + 1代表第二个元素的地址，因此结果是5
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}


int main()
{
	char* p = "abcdef";

	printf("%zd\n", sizeof(p));
	//
	printf("%zd\n", sizeof(p + 1));
	printf("%zd\n", sizeof(*p));
	printf("%zd\n", sizeof(p[0]));
	printf("%zd\n", sizeof(&p));
	printf("%zd\n", sizeof(&p + 1));
	printf("%zd\n", sizeof(&p[0] + 1));

	return 0;
}



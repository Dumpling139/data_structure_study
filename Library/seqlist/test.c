#define _CRT_SECURE_NO_WARNINGS 1

//ͼ�����ϵͳ��ʵ��

#include<stdio.h>
#include<stdlib.h>
#include"contact.h"


//����1
int main()
{
	LIB* lib = (LIB*)malloc(sizeof(LIB));
	LIBInit(lib);
	LIBAdd(lib);
  LIBDestroy(lib);
  free(lib);
	return 0;
}

//����2
//int main() {
//	LIB* lib = (LIB*)malloc(sizeof(LIB));
//	LIBInit(lib);
//	LIBAdd(lib);
//	LIBVicePrice(lib);
//    LIBDestroy(lib);
//    free(lib);
//	return 0;
//}

//����3
//int main()
//{
//	LIB* lib = (LIB*)malloc(sizeof(LIB));
//	LIBInit(lib);
//	LIBAdd(lib);
//	LIBTOP1(lib);
//	LIBDestroy(lib);
//	free(lib);
//	return 0;
//}

//����4
//int main()
//{
//	LIB* lib = (LIB*)malloc(sizeof(LIB));
//	LIBInit(lib);
//	LIBAdd(lib);
//	BookInsert(lib);
//	LIBDestroy(lib);
//    free(lib);
//	return 0;
//}

//����5
//int main()
//{
//	LIB* lib = (LIB*)malloc(sizeof(LIB));
//	LIBInit(lib);
//	LIBAdd(lib);
//	LIBDel(lib);
//    LIBDestroy(lib);
//    free(lib);
//	return 0;
//}

//����6
//int main()
//{
//	LIB* lib = (LIB*)malloc(sizeof(LIB));
//	LIBInit(lib);
//	LIBAdd2(lib);
//	LIBCheck(lib);
//    LIBDestroy(lib);
//    free(lib);
//	return 0;
//}
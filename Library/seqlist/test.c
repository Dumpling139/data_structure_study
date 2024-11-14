#define _CRT_SECURE_NO_WARNINGS 1

//图书管理系统的实现

#include<stdio.h>
#include<stdlib.h>
#include"contact.h"


//问题1
int main()
{
	LIB* lib = (LIB*)malloc(sizeof(LIB));
	LIBInit(lib);
	LIBAdd(lib);
  LIBDestroy(lib);
  free(lib);
	return 0;
}

//问题2
//int main() {
//	LIB* lib = (LIB*)malloc(sizeof(LIB));
//	LIBInit(lib);
//	LIBAdd(lib);
//	LIBVicePrice(lib);
//    LIBDestroy(lib);
//    free(lib);
//	return 0;
//}

//问题3
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

//问题4
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

//问题5
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

//问题6
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
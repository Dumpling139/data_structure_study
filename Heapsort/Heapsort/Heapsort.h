#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define HeapType int

void Heapsort(HeapType* a, int num);
void Adjustdown(HeapType* a, int pos, int num);
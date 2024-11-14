#include"StackList.h"
typedef struct {
    StackNode* a;
    StackNode* b;
} MyQueue;


MyQueue* myQueueCreate() {
    StackNode* x = (StackNode*)malloc(sizeof(StackNode));
    StackNode* y = (StackNode*)malloc(sizeof(StackNode));
    InitStack(x);
    InitStack(y);
    MyQueue* Queue = (MyQueue*)malloc(sizeof(MyQueue));
    Queue->a = x;
    Queue->b = y;
    return Queue;
}

void myQueuePush(MyQueue* obj, int x) {
    while (!StackEmpty(obj->b))
    {
        StackPush(obj->a, StackPop(obj->b));
    }
    StackPush(obj->a, x);
}
int myQueuePop(MyQueue* obj) {
    while (!StackEmpty(obj->a))
    {
        StackPush(obj->b, StackPop(obj->a));
    }
    return StackPop(obj->b);
}

int myQueuePeek(MyQueue* obj) {
    while (!StackEmpty(obj->a))
    {
        StackPush(obj->b, StackPop(obj->a));
    }
    return StackTop(obj->b);
}

bool myQueueEmpty(MyQueue* obj) {
    return StackEmpty(obj->a) && StackEmpty(obj->a);
}

void myQueueFree(MyQueue* obj) {
    DestoryStack(obj->a);
    DestoryStack(obj->b);
    free(obj);
    obj = NULL;
}

int main() {
    MyQueue* A = myQueueCreate();
    myQueuePush(A, 1);
    myQueuePush(A, 2);
    myQueuePeek(A);
    myQueuePop(A);
    myQueueEmpty(A);
	return 0;
}
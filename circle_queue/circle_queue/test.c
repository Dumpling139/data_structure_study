#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>







typedef struct {
    int* val;
    int front;
    int rear;
    int capacity;
} MyCircularQueue;

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    int tmp = obj->rear + 1;
    if (tmp = obj->capacity)
        tmp = 0;
    return tmp == obj->front;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->rear == obj->front;
}


MyCircularQueue* myCircularQueueCreate(int k) {
    int* tmp_val = (int*)malloc(k * sizeof(int));
    MyCircularQueue* Q = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    if (Q == NULL)
    {
        perror("malloc error");
    }
    Q->val = tmp_val;
    Q->front = 0;
    Q->rear = 0;
    Q->capacity = k;
    return Q;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj))
        return false;
    obj->val[obj->rear] = value;
    obj->rear++;
    if (obj->rear == obj->capacity)
        obj->rear = 0;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return false;
    obj->front++;
    if (obj->front == obj->capacity + 1)
        obj->front = 0;
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (obj->front == obj->rear)
        return -1;
    return obj->val[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (obj->front == obj->rear)
        return -1;
    int tmp = obj->rear - 1;
    if (tmp == -1)
        tmp = obj->capacity - 1;
    return obj->val[tmp];
}



void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->val);
    free(obj);
    obj = NULL;

}
int main() {
    MyCircularQueue* a = myCircularQueueCreate(3);
    myCircularQueueEnQueue(a, 1);
    return 0;
}
/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/
#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>


typedef struct {
    ST s1;
    ST s2;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* mq = (MyQueue*)malloc(sizeof(MyQueue));

    if (mq == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }

    StackInit(&mq->s1);
    StackInit(&mq->s2);

    return mq;

}

void myQueuePush(MyQueue* obj, int x) {
    //往s1里入数据

    StackPush(&obj->s1, x);
}

int myQueuePop(MyQueue* obj) {

    if (StackEmpty(&obj->s2))
    {
        //如果s1为没有数据，就把s1里的数据倒到s2
        while (!StackEmpty(&obj->s1))
        {
            StackPush(&obj->s2, StackTop(&obj->s1));
            StackPop(&obj->s1);
        }
    }

    int ret = StackTop(&obj->s2);
    StackPop(&obj->s2);

    return ret;

}

int myQueuePeek(MyQueue* obj) {
    if (StackEmpty(&obj->s2))
    {
        //如果s1为没有数据，就把s1里的数据倒到s2
        while (!StackEmpty(&obj->s1))
        {
            StackPush(&obj->s2, StackTop(&obj->s1));
            StackPop(&obj->s1);
        }
    }

    return StackTop(&obj->s2);
}

bool myQueueEmpty(MyQueue* obj) {
    return StackEmpty(&obj->s1) && StackEmpty(&obj->s2);
}

void myQueueFree(MyQueue* obj) {
    StackDestory(&obj->s1);
    StackDestory(&obj->s2);

    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/
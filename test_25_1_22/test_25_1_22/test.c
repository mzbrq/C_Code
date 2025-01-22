#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//用队列实现栈

typedef struct {
    Queue Q1;
    Queue Q2;
} MyStack;


MyStack* myStackCreate()
{
    MyStack* ps = (MyStack*)malloc(sizeof(MyStack));

    if (ps == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }

    QueueInit(&ps->Q1);
    QueueInit(&ps->Q2);

    return ps;


}

void myStackPush(MyStack* obj, int x) {
    //往有数据的列表插入数据

    if (!QueueEmpty(&obj->Q1))
    {
        QueuePush(&obj->Q1, x);
    }
    else
    {
        QueuePush(&obj->Q2, x);
    }

}

int myStackPop(MyStack* obj) {
    Queue* EmptyQ = &obj->Q1;
    Queue* NoneEmptyQ = &obj->Q2;

    if (!QueueEmpty(&obj->Q1))
    {
        EmptyQ = &obj->Q2;
        NoneEmptyQ = &obj->Q1;
    }

    while (QueueSize(NoneEmptyQ) > 1)
    {
        QueuePush(EmptyQ, QueueFront(NoneEmptyQ));
        QueuePop(NoneEmptyQ);
    }
    int Top = QueueFront(NoneEmptyQ);
    QueuePop(NoneEmptyQ);

    return Top;
}

int myStackTop(MyStack* obj) {

    int Top = 0;
    if (!QueueEmpty(&obj->Q1))
    {
        Top = QueueEnd(&obj->Q1);
    }
    else
    {
        Top = QueueEnd(&obj->Q2);
    }

    return Top;
}

bool myStackEmpty(MyStack* obj) {

    return QueueEmpty(&obj->Q1) && QueueEmpty(&obj->Q2);
}

void myStackFree(MyStack* obj) {

    QueueDestory(&obj->Q1);
    QueueDestory(&obj->Q2);

    free(obj);
    obj = NULL;

}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/




//有效的括号

bool isValid(char* s)
{
    ST s1;
    StackInit(&s1);

    while (*s != '\0')
    {
        switch (*s)
        {
        case '(':
        case '[':
        case '{':
        {
            //左括号压栈
            StackPush(&s1, *s);
            s++;
            break;
        }
        case ')':
        case ']':
        case '}':
        {
            //右括号取栈顶元素比较

            if (StackEmpty(&s1))
            {
                StackDestory(&s1);
                return false;
            }

            STDataType Top = StackTop(&s1);
            StackPop(&s1);

            //不匹配，返回false
            if (Top == '(' && *s != ')'
                || Top == '[' && *s != ']'
                || Top == '{' && *s != '}')
            {
                StackDestory(&s1);
                return false;
            }
            else
            {
                s++;
            }
        }
        default:
            break;
        }
    }

    if (StackEmpty(&s1))
    {
        return true;
    }

    return false;

}
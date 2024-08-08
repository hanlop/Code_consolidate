#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int StackDataType;
typedef struct Stack
{
	StackDataType* arr;
	int top;
	int capacity;
}Stack;

//初始栈
void StackInit(Stack* ps);

//销毁栈
void StackDestory(Stack* ps);

//入栈
void StackPush(Stack* ps, StackDataType	x);

//判断栈是否为空
bool IsEmpty(Stack* ps);

//取出栈顶元素
StackDataType StackTop(Stack* ps);

//获取链表有效个数
int StackSize(Stack* ps);

//出栈
void StackPop(Stack* ps);
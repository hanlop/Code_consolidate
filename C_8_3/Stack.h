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

//��ʼջ
void StackInit(Stack* ps);

//����ջ
void StackDestory(Stack* ps);

//��ջ
void StackPush(Stack* ps, StackDataType	x);

//�ж�ջ�Ƿ�Ϊ��
bool IsEmpty(Stack* ps);

//ȡ��ջ��Ԫ��
StackDataType StackTop(Stack* ps);

//��ȡ������Ч����
int StackSize(Stack* ps);

//��ջ
void StackPop(Stack* ps);
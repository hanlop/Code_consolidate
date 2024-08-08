#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

//��ʼջ
void StackInit(Stack* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->capacity = ps->top = 0;
}

//��ջ
void StackPush(Stack* ps, StackDataType	x)
{
	assert(ps);
	//�������

	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		StackDataType* tmp = (StackDataType*)realloc(ps->arr,
			sizeof(StackDataType) * newcapacity);

		if (tmp != NULL)
		{
			ps->arr = tmp;
			ps->capacity = newcapacity;
		}
		else
		{
			exit(1);
		}
	}

	ps->arr[ps->top] = x;
	ps->top++;
}
//�ж�ջ�Ƿ�Ϊ��
bool IsEmpty(Stack* ps)
{
	return ps->top == 0;
}

//��ջ
void StackPop(Stack* ps)
{
	assert(ps);
	assert(!IsEmpty(ps));

	ps->top--;
}

//ȡ��ջ��Ԫ��
StackDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!IsEmpty(ps));

	return ps->arr[ps->top - 1];
}

//��ȡ������Ч����
int StackSize(Stack* ps)
{
	return ps->top;
}

//����
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = ps->top = 0;
}
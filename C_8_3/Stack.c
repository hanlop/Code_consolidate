#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

//初始栈
void StackInit(Stack* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->capacity = ps->top = 0;
}

//入栈
void StackPush(Stack* ps, StackDataType	x)
{
	assert(ps);
	//检查容量

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
//判断栈是否为空
bool IsEmpty(Stack* ps)
{
	return ps->top == 0;
}

//出栈
void StackPop(Stack* ps)
{
	assert(ps);
	assert(!IsEmpty(ps));

	ps->top--;
}

//取出栈顶元素
StackDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!IsEmpty(ps));

	return ps->arr[ps->top - 1];
}

//获取链表有效个数
int StackSize(Stack* ps)
{
	return ps->top;
}

//销毁
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = ps->top = 0;
}
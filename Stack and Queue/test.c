#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"
#include "Queue.h"

void testStack()
{
	Stack s;
	StackInit(&s);

	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);

	printf("%d\n", StackSize(&s));
	
	while (!IsEmpty(&s))
	{
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}
	printf("\n");
	printf("%d\n", StackSize(&s));

	StackDestory(&s);
}

void testQueue()
{
	Queue q;
	QueueInit(&q);

	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	printf("%d\n", QueueSize(&q));

	QueuePop(&q);
	printf("%d %d", QueueFront(&q), QueueBack(&q));
	QueuePop(&q);
	QueuePop(&q);
	printf("%d %d", QueueFront(&q), QueueBack(&q));
	QueuePop(&q);

}

int main()
{
	//testStack();
	testQueue();

	return 0;
}
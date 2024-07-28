#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

//初始化队列
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->size = 0;
	pq->phead = pq->ptail = NULL;

}

//队列判空
bool QueueEmpty(Queue* pq)
{
	return pq->phead == NULL;
}

//入队列,队尾
void QueuePush(Queue* pq, QueueDataType x)
{
	assert(pq);
	QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
	newNode->next = NULL;
	newNode->x = x;

	if (newNode == NULL)
	{
		perror("malloc fail");
		exit(1);
	}

	if ((pq->phead == NULL)&&(pq->ptail==NULL))
	{
		pq->phead = pq->ptail = newNode;
	}
	else
	{
		pq->ptail->next = newNode;
		pq->ptail = pq->ptail->next;
	}

	pq->size++;
}

//出队列,队头
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	QueueNode* del = pq->phead;
	if (pq->phead == pq->ptail)
	{
		pq->phead = pq->ptail = NULL;
		free(del);
		del = NULL;
	}
	else
	{
		pq->phead = pq->phead->next;
		free(del);
		del = NULL;
	}

	pq->size--;
}

//取队头数据
QueueDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->phead->x;
}

//取队尾数据
QueueDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->ptail->x;
}


//队列的有效个数
int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}

//销毁队列
void QueueDestory(Queue* pq)
{
	assert(pq);


	while (pq->phead)
	{
		QueueNode* next = pq->ptail->next;
		free(pq->phead);
		pq->phead = next;
	}

	pq->phead = pq->ptail = 0;
	pq->size = 0;

}
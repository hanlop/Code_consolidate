#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int QueueDataType;
typedef struct QueueNode
{
	QueueDataType x;
	struct QueueNode* next;
}QueueNode;
typedef struct Queue
{
	QueueNode* phead;
	QueueNode* ptail;
	int size;
}Queue;

//初始化队列
void QueueInit(Queue* pq);

//队列判空
bool QueueEmpty(Queue* pq);

//入队列,队尾
void QueuePush(Queue* pq, QueueDataType x);

//出队列,队头
void QueuePop(Queue* pq);

//取队头数据
QueueDataType QueueFront(Queue* pq);

//取队尾数据
QueueDataType QueueBack(Queue* pq);

//队列的有效个数
int QueueSize(Queue* pq);
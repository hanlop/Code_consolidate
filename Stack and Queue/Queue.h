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

//��ʼ������
void QueueInit(Queue* pq);

//�����п�
bool QueueEmpty(Queue* pq);

//�����,��β
void QueuePush(Queue* pq, QueueDataType x);

//������,��ͷ
void QueuePop(Queue* pq);

//ȡ��ͷ����
QueueDataType QueueFront(Queue* pq);

//ȡ��β����
QueueDataType QueueBack(Queue* pq);

//���е���Ч����
int QueueSize(Queue* pq);
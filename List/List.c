#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void ListInit(ListNode** phead)
{
	assert(phead);

	*phead = (ListNode*)malloc(sizeof(ListNode));
	(*phead)->x = -1;
	(*phead)->next = *phead;
	(*phead)->prev = *phead;
}

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->x = x;
	newNode->next = newNode;
	newNode->prev = newNode;

	return newNode;
}

void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* tail = phead->prev;

	ListNode* newNode = BuyListNode(x);
	newNode->next = phead;
	newNode->prev = tail;

	tail->next = newNode;
	phead->prev = newNode;
}

void ListPrint(ListNode* phead)
{
	assert(phead);

	ListNode* pcur = phead->next;

	while (pcur != phead)
	{
		printf("%d->", pcur->x);
		pcur = pcur->next;
	}
	printf("\n");
}

void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* newNode = BuyListNode(x);

	phead->next->prev = newNode;

	newNode->next = phead->next;
	newNode->prev = phead;
	phead->next = newNode;
}

void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* del = phead->prev;

	del->prev->next = phead;
	phead->prev = del->prev;

	free(del);
	del = NULL;
}

void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* del = phead->next;

	phead->next = del->next;
	del->next->prev = phead;

	free(del);
	del = NULL;
}

ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* pcur = phead->next;

	while (pcur != phead)
	{
		if (pcur->x == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}

	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newNode = BuyListNode(x);
	
	pos->next->prev = newNode;
	newNode->next = pos->next;
	newNode->prev = pos;

	pos->next = newNode;
}

void ListErase(ListNode* pos)
{
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;

	free(pos);
	pos == NULL;
}
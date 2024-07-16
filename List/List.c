#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void ListInit(ListNode** phead)
{
	*phead = (ListNode*)malloc(sizeof(ListNode));
	(*phead)->x = -1;
	(*phead)->next = *phead;
	(*phead)->prev = *phead;
}
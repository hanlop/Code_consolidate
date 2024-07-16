#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	LTDataType x;
	struct ListNode* prev;
	struct ListNode* next;
}ListNode;
 
void ListInit(ListNode** phead);

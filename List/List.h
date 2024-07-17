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
//申请新的节点
ListNode* BuyListNode(LTDataType x);
//打印节点
void ListPrint(ListNode* phead);
//尾插尾删/头插头删
void ListPushBack(ListNode* phead, LTDataType x);
void ListPushFront(ListNode* phead, LTDataType x);

void ListPopBack(ListNode* phead);
void ListPopFront(ListNode* phead);

//查找
ListNode* ListFind(ListNode* phead,LTDataType x);
//在pos位置之后插入数据
void ListInsert(ListNode* pos, LTDataType x);
//删除pos位置的数据
void ListErase(ListNode* pos);

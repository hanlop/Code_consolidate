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
//�����µĽڵ�
ListNode* BuyListNode(LTDataType x);
//��ӡ�ڵ�
void ListPrint(ListNode* phead);
//β��βɾ/ͷ��ͷɾ
void ListPushBack(ListNode* phead, LTDataType x);
void ListPushFront(ListNode* phead, LTDataType x);

void ListPopBack(ListNode* phead);
void ListPopFront(ListNode* phead);

//����
ListNode* ListFind(ListNode* phead,LTDataType x);
//��posλ��֮���������
void ListInsert(ListNode* pos, LTDataType x);
//ɾ��posλ�õ�����
void ListErase(ListNode* pos);

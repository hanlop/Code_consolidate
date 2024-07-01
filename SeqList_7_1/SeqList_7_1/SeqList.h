#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


//��̬˳���
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;
	int capacity;
}SeqList;

//˳����ʼ��
void SeqListInit(SeqList* p);
//˳���ӡ
void SeqListPrint(SeqList* p);
//˳��������
void SeqListDestory(SeqList* p);


//˳���β��
void SeqListPushBack(SeqList* p, SLDateType x);
//˳�������
void CheckCapacity(SeqList* p);
//˳���ͷ��
void SeqListPushFront(SeqList* p, SLDateType x);
//˳���βɾ
void SeqListPopBack(SeqList* p);

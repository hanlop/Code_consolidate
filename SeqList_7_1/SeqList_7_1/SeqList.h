#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


//动态顺序表
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;
	int capacity;
}SeqList;

//顺序表初始化
void SeqListInit(SeqList* p);
//顺表打印
void SeqListPrint(SeqList* p);
//顺序表的销毁
void SeqListDestory(SeqList* p);


//顺序表尾插
void SeqListPushBack(SeqList* p, SLDateType x);
//顺序表增容
void CheckCapacity(SeqList* p);
//顺序表头插
void SeqListPushFront(SeqList* p, SLDateType x);
//顺序表尾删
void SeqListPopBack(SeqList* p);

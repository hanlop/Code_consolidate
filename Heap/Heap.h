#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef int HeapDatatype;
typedef struct Heap
{
	HeapDatatype* arr;
	int size;
	int capacity;
}Heap;

//堆的初始化
void HeapInit(Heap* hp);
//堆的销毁
void HeapDestory(Heap* hp);
//交换数据
void Swap(HeapDatatype* a1, HeapDatatype* a2);
//堆的插入
void HeapPush(Heap* hp, HeapDatatype x);

//取堆顶的数据
HeapDatatype HeapTop(Heap* hp);
//判空
bool HeapEmpty(Heap* hp);

//求堆的存储的数量
int HeapSize(Heap* hp);

//删除堆顶的数据
void HeapPop(Heap* hp);

//向上调整算法
void AdjustUp(HeapDatatype* a, int child);

//向下调整算法  左右子树都是小堆 对堆顶进行向下调整算法 
void AdjustDown(HeapDatatype* a, int n, int parent);
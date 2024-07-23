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

//�ѵĳ�ʼ��
void HeapInit(Heap* hp);
//�ѵ�����
void HeapDestory(Heap* hp);
//��������
void Swap(HeapDatatype* a1, HeapDatatype* a2);
//�ѵĲ���
void HeapPush(Heap* hp, HeapDatatype x);

//ȡ�Ѷ�������
HeapDatatype HeapTop(Heap* hp);
//�п�
bool HeapEmpty(Heap* hp);

//��ѵĴ洢������
int HeapSize(Heap* hp);

//ɾ���Ѷ�������
void HeapPop(Heap* hp);

//���ϵ����㷨
void AdjustUp(HeapDatatype* a, int child);

//���µ����㷨  ������������С�� �ԶѶ��������µ����㷨 
void AdjustDown(HeapDatatype* a, int n, int parent);
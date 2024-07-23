#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"
//�ѵĳ�ʼ��
void HeapInit(Heap* hp)
{
	assert(hp);
	hp->arr = NULL;
	hp->capacity = hp->size = 0;
}

void Swap(HeapDatatype* a1, HeapDatatype* a2)
{
	HeapDatatype temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}
//���ϵ����㷨
void AdjustUp(HeapDatatype* a, int child)
{
	//�����ӽڵ�Ϊi  ��parent=(i-1)/2
	//�����ڵ�Ϊi   ������Ϊ 2i+1 �Ѻ���Ϊ2i+2
	int parent = (child - 1) / 2;

	
	while (child>0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

//���µ����㷨
void AdjustDown(HeapDatatype* a, int n, int parent)
{
	int child = parent * 2 + 1;

	while (child<n)
	{
		//�ҵ����ҽڵ�С����һ��
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;		
		}
		else
		{
			break;
		}
	}
}

//�ѵĲ���
void HeapPush(Heap* hp, HeapDatatype x)
{
	assert(hp);

	//�������
	if (hp->size == hp->capacity)
	{
		int newcapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;

		HeapDatatype* temp = (HeapDatatype*)realloc(hp->arr,sizeof(HeapDatatype) * newcapacity);
		if (temp == NULL)
		{
			perror("malloc fail");
			exit(1);
		}

		hp->capacity = newcapacity;
		hp->arr = temp;
	}

	hp->arr[hp->size] = x;

	//����������Ҫ��֤�ѵ�����,�������»������ϵ����㷨
	AdjustUp(hp->arr, hp->size);
	hp->size++;
}
//�п�
bool HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->size == 0;
}
//ȡ�Ѷ�����
HeapDatatype HeapTop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));

	return hp->arr[0];
}

//��ѵĴ洢������
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->size;
}

//ɾ���Ѷ�������
void HeapPop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));

	//���Ѷ����ݺ����һ�����ݽ���
	Swap(&hp->arr[0], &hp->arr[hp->size-1]);

	hp->size--;
	//�ԶѶ��������µ����㷨
	AdjustDown(hp->arr, hp->size, 0);
}

//�ѵ�����
void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp->arr);
	hp->arr = NULL;
	hp->capacity = hp->size = 0;
}

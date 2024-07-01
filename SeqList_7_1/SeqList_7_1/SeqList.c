#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
//˳���ĳ�ʼ��
void SeqListInit(SeqList* p)
{
	assert(p);
	p->a = NULL;
	p->size = p->capacity = 0;
}


//˳��������
void SeqListDestory(SeqList* p)
{
	assert(p);

	free(p->a);
	p->a = NULL;
	p->size = p->capacity = 0;
}

//˳����ӡ
void SeqListPrint(SeqList* p)
{
	assert(p);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		printf("%d ", p->a[i]);
	}

	printf("\n");
}

void CheckCapacity(SeqList* p)
{
	assert(p);
	int newcapacity = p->capacity == 0 ? 4 : p->capacity * 2;

	if (p->capacity == p->size)
	{
		p->capacity = newcapacity;
		SLDateType* tmp = (SLDateType*)
			realloc(p->a, p->capacity * sizeof(SLDateType));

		if (tmp != NULL)
		{
			p->a = tmp;
		}
		else
		{
			exit(1);
		}
	}
}

//˳���β��
void SeqListPushBack(SeqList* p, SLDateType x)
{
	assert(p);
	CheckCapacity(p);

	p->a[p->size] = x;
	p->size++;
}

//˳���ͷ��
void SeqListPushFront(SeqList* p, SLDateType x)
{
	assert(p);
	CheckCapacity(p);

	int i = 0;
	for (i = p->size; i > 0; i--)
	{
		p->a[i] = p->a[i-1];
	}

	p->a[0] = x;

	p->size++;
}

//˳���βɾ
void SeqListPopBack(SeqList* p)
{
	assert(p);
	assert(p->size);
	p->size--;

}

//˳���ͷɾ
void SeqListPopFront(SeqList* p)
{
	assert(p);
	assert(p->size);
	int i = 0;
	for (i = 0; i < p->size-1; i++)
	{
		p->a[i] = p->a[i + 1];
	}
	p->size--;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"
//堆的初始化
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
//向上调整算法
void AdjustUp(HeapDatatype* a, int child)
{
	//若孩子节点为i  则parent=(i-1)/2
	//若父节点为i   则左孩子为 2i+1 友孩子为2i+2
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

//向下调整算法
void AdjustDown(HeapDatatype* a, int n, int parent)
{
	int child = parent * 2 + 1;

	while (child<n)
	{
		//找到左右节点小的那一个
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

//堆的插入
void HeapPush(Heap* hp, HeapDatatype x)
{
	assert(hp);

	//检查容量
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

	//插入完数据要保证堆的性质,进行向下或者向上调整算法
	AdjustUp(hp->arr, hp->size);
	hp->size++;
}
//判空
bool HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->size == 0;
}
//取堆顶数据
HeapDatatype HeapTop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));

	return hp->arr[0];
}

//求堆的存储的数量
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->size;
}

//删除堆顶的数据
void HeapPop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));

	//将堆顶数据和最后一个数据交换
	Swap(&hp->arr[0], &hp->arr[hp->size-1]);

	hp->size--;
	//对堆顶进行向下调整算法
	AdjustDown(hp->arr, hp->size, 0);
}

//堆的销毁
void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp->arr);
	hp->arr = NULL;
	hp->capacity = hp->size = 0;
}

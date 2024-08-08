#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"
void Swap(int* a1, int* a2)
{
	int temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}

void Print(int* arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void InsertSort(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int end = i;
		int num = arr[end + 1];

		while (end >= 0)
		{
			if (arr[end] > num)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}

		arr[end + 1] = num;
	}
}

void ShellSort(int* arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (size_t i = 0; i < n - gap; i++)
		{
			int end = i;
			int num = arr[end + gap];

			while (end >= 0)
			{
				if (arr[end] > num)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}

			arr[end + gap] = num;
		}
	}
}

void BubbleSort(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
				flag = 0;
			}
		}

		if (flag)
		{
			break;
		}
	}
}

//排升序建大堆 派降序建小堆
//向下调整算法
void AddjustDown(int* arr, int n, int root)
{
	int parent = root;
	int child = 2 * parent + 1;

	while (child < n)
	{
		if (child + 1 < n && arr[child + 1] > arr[child])
		{
			child = child + 1;
		}

		if (arr[parent] < arr[child])
		{
			Swap(&arr[parent], &arr[child]);
		}

		parent = child;
		child = 2 * parent + 1;
	}

}
void HeapSort(int* arr, int n)
{
	//用向下调整算法建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AddjustDown(arr, n, i);
	}

	//开始排序
	while (n>0)
	{
		Swap(&arr[0], &arr[n - 1]);
		n--;
		AddjustDown(arr, n, 0);
	}
}

void SelectSort(int* arr, int n)
{
	int left = 0;
	int right = n - 1;

	int maxi = left, mini = left;

	while (left<right)
	{
		//找到最大值和最小值
		for (int i = left+1; i <= right ; i++)
		{
			if (arr[i] < arr[mini])
			{
				mini = i;
			}

			if (arr[i] > arr[maxi])
			{
				maxi = i;
			}
		}

		//将最大值和最小值换到指定位置
		//当maxi在左边时,由于最小值交换过去会覆盖该位置
		//提前改变最大值的指向
		if (maxi == left)
		{
			maxi = right;
		}
		Swap(&arr[mini], &arr[left]);
		Swap(&arr[maxi], &arr[right]);

		left++;
		right--;
	}
}
//hoare版本
int _QuickSort1(int* arr, int left, int right)
{
	int key = arr[left];
	int start = left+1;
	int end = right;
	

	while (start <= end)
	{
		while (start <= end && arr[end] > key)
		{
			end--;
		}

		while (start <= end && arr[start] < key)
		{
			start++;
		}

		if (start <= end)
		{
			Swap(&arr[end], &arr[start]);
			start++;
			end--;
		}
	}

	Swap(&arr[left], &arr[end]);

	return end;
}

//挖坑法
int _QuickSort2(int* arr, int left, int right)
{
	int hore = left;
	int key = arr[left];


	while (left < right)
	{
		while (left < right && arr[right] >= key)
		{
			right--;
		}
		arr[hore] = arr[right];
		hore = right;


		while (left < right && arr[left] <= key)
		{
			left++;
		}

		arr[hore] = arr[left];
		hore = left;
	}

	arr[hore] = key;

	return hore;
}

//lomuto前后指针法
int _QuickSort3(int* arr, int left, int right)
{
	int prev = left;
	int cur = left + 1;
	int key = arr[left];

	while (cur <= right)
	{
		if (arr[cur] < key && ++prev != cur)
		{
			Swap(&arr[cur], &arr[prev]);
		}

		cur++;
	}

	Swap(&arr[prev],&arr[left]);

	return prev;
}



void QuickSort(int* arr, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	//找到基准值
	int mid = _QuickSort3(arr, left, right);

	QuickSort(arr, left, mid - 1);
	QuickSort(arr, mid + 1, right);
}

//非递归快排
//用栈实现
void QuickSortNonR(int* a, int left, int right)
{
	Stack s1;
	StackInit(&s1);

	int mid = _QuickSort2(a, left, right);

	StackPush(&s1, right);
	StackPush(&s1, mid + 1);

	StackPush(&s1, mid - 1);
	StackPush(&s1, left);

	while (!IsEmpty(&s1))
	{
		left = StackTop(&s1);
		StackPop(&s1);

		right = StackTop(&s1);
		StackPop(&s1);
		
		mid = _QuickSort2(a, left, right);

		if (mid + 1 < right)
		{
			StackPush(&s1, right);
			StackPush(&s1, mid + 1);
		}

		if (mid - 1 > left)
		{
			StackPush(&s1, mid - 1);
			StackPush(&s1, left);
		}
	}

	StackDestory(&s1);
}

//归并排序

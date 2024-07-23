#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void HeapTest()
{
	Heap hp;
	HeapInit(&hp);

	int arr[] = {67, 20, 50, 22, 45, 10};

	//建堆
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		HeapPush(&hp, arr[i]);
	}

	while (!HeapEmpty(&hp))
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}

	HeapDestory(&hp);
}
//void test()
//{
//	int arr[]={20,30,}
//}
void HeapSort(int* arr, int n)
{
	//通过向下调整算法建堆
	//向下调整建堆时间复杂度O(n)

	int i = 0;
	for (i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);
	}


	//升序建大堆
	//降序建小堆

	while (n>0)
	{
		Swap(&arr[0], &arr[n - 1]);
		n--;
		AdjustDown(arr, n, 0);
	}
}


void testsort()
{
	int arr[] = { 20,10,50,23,35,30,40 };
	HeapSort(arr, sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
}

void TestTopKW()
{
	//创建一个大数据
	const char* file = "data.txt";
	FILE* pf = fopen(file, "w");

	if (pf == NULL)
	{
		perror("fopen fail");
		exit(1);
	}

	int n = 10000;
	srand((unsigned)time(NULL));
	//将10000个随机数写入文件中
	while (n--)
	{
		int num = rand()%100000;
		fprintf(pf, "%d\n", num);
	}

	fclose(pf);
}

void TestTopKR()
{
	const char* file = "data.txt";
	FILE* pf = fopen(file, "r");


	//建一个k大小的数组
	int k = 5;
	int* arr = (int*)malloc(sizeof(int) * k);

	//将开辟的数据放入数据
	int i = 0;
	for (i = 0; i < k; i++)
	{
		fscanf(pf, "%d", &arr[i]);
	}

	//建小堆 找最大
	for (i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, k, i);
	}

	int num = 0;
	while (fscanf(pf, "%d", &num) != EOF)
	{
		if (arr[0] < num)
		{
			arr[0] = num;
			AdjustDown(arr, k, 0);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", arr[i]);
	}

	fclose(pf);
}



int main()
{
	//HeapTest();
	//test();

	//testsort();

	//TestTopKW();
	TestTopKR();

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void HeapTest()
{
	Heap hp;
	HeapInit(&hp);

	int arr[] = {67, 20, 50, 22, 45, 10};

	//����
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
	//ͨ�����µ����㷨����
	//���µ�������ʱ�临�Ӷ�O(n)

	int i = 0;
	for (i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);
	}


	//���򽨴��
	//����С��

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
	//����һ��������
	const char* file = "data.txt";
	FILE* pf = fopen(file, "w");

	if (pf == NULL)
	{
		perror("fopen fail");
		exit(1);
	}

	int n = 10000;
	srand((unsigned)time(NULL));
	//��10000�������д���ļ���
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


	//��һ��k��С������
	int k = 5;
	int* arr = (int*)malloc(sizeof(int) * k);

	//�����ٵ����ݷ�������
	int i = 0;
	for (i = 0; i < k; i++)
	{
		fscanf(pf, "%d", &arr[i]);
	}

	//��С�� �����
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
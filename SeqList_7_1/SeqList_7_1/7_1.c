#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void test()
{
	SeqList sl;
	SeqListInit(&sl);
	SeqListDestory(&sl);

	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);

	SeqListPrint(&sl);

	SeqListPushFront(&sl, 5);
	SeqListPushFront(&sl, 2);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPrint(&sl);

	SeqListPopFront(&sl);
	SeqListPrint(&sl);

	return 0;
}
int main()
{
	test();


	return 0;
}
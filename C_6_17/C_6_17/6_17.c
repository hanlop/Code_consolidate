#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ������Ϊ n ���������� nums �����㹹��һ������Ϊ 2n �Ĵ����� ans ��
//�����±� �� 0 ��ʼ���� ���������� 0 <= i < n �� i ��������������Ҫ��
//
//	ans[i] == nums[i]
//	ans[i + n] == nums[i]
//	������ԣ�ans ������ nums ���� ���� �γɡ�
//
//	�������� ans ��

//int* getConcatenation(int* nums, int numsSize, int* returnSize) {
//    int* ans = (int*)malloc(sizeof(int) * 2 * numsSize);
//    *returnSize = 2 * numsSize;//
//
//    int i = 0;
//    for (i = 0; i < 2 * numsSize; i++)
//    {
//        if (i < numsSize)
//            ans[i] = nums[i];
//        else
//            ans[i] = nums[i - numsSize];
//    }
//
//    return ans;
//}
//int main()
//{
//    int arr[] = { 1,2,1 };
//    int length = sizeof(arr) / sizeof(arr[0]);
//
//	return 0;
//}

//��ϰʹ�ö�̬�ڴ���ص�4�������������Թ۲졣
//
//malloc��calloc��realloc��free

#include <stdlib.h>
int main()
{
	//�����ʼ������
	int* arr = (int*)malloc(sizeof(int) * 10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	//��ʼ������
	int* arr1 = (int*)calloc(10, sizeof(int));
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	//ǰ�汣���Ĳ��ֻ����㣬��չ���ڴ治���ʼ��
	int* temp = (int*)realloc(arr1, sizeof(int) * 20);
	if (temp != NULL)
	{
		arr1 = temp;
	}

	for (i = 0; i < 20; i++)
	{
		printf("%d ", arr1[i]);
	}

	//�ͷ��ڴ棬��ֹ�ڴ�й¶
	free(arr);
	free(arr1);


	return 0;
}
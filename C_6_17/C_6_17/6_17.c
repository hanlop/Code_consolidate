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


//int main()
//{
//
//
//	return 0;
//}
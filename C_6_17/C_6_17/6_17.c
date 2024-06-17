#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//给你一个长度为 n 的整数数组 nums 。请你构建一个长度为 2n 的答案数组 ans ，
//数组下标 从 0 开始计数 ，对于所有 0 <= i < n 的 i ，满足下述所有要求：
//
//	ans[i] == nums[i]
//	ans[i + n] == nums[i]
//	具体而言，ans 由两个 nums 数组 串联 形成。
//
//	返回数组 ans 。

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

//练习使用动态内存相关的4个函数，并调试观察。
//
//malloc、calloc、realloc、free


//int main()
//{
//
//
//	return 0;
//}
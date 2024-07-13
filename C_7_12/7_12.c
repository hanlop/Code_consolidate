#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int removeElement(int* nums, int numsSize, int val) {
//    int count = numsSize;
//    //遍历数组中的每个元素
//    for (int i = 0; i < count; i++)
//    {
//        //找到要移除的值
//        if (nums[i] == val)
//        {
//            for (int j = i; j < count - 1; j++)
//            {
//                nums[j] = nums[j + 1];
//            }
//            i--;
//            count--;
//        }
//    }
//
//    return count;
//}
//
//int main()
//{
//    int nums[] = { 3, 2, 2, 3 };
//    int k = removeElement(nums, sizeof(nums) / sizeof(nums[0]), 3);
//    printf("%d\n", k);
//
//    for (int i = 0; i < k; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//
//	return 0;
//}

//int removeDuplicates(int* nums, int numsSize) {
//    int count = numsSize;
//
//    for (int i = 0; i < count-1; i++)
//    {
//        if (nums[i] == nums[i + 1])
//        {
//            for (int j = i; j < count - 1; j++)
//            {
//                nums[j] = nums[j + 1];
//            }
//            i--;
//            count--;
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    int nums[] = { 1, 1, 2 };
//    int k = removeDuplicates(nums, sizeof(nums) / sizeof(nums[0]));
//    printf("%d\n", k);
//
//    for (int i = 0; i < k; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//
//	return 0;
//}
#include <stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int* mer = (int*)malloc((m + n) * sizeof(int));

    if (mer == NULL)
    {
        return;
    }

    int i = 0;
    int j = 0;
    int x = 0;
    for (x = 0; x < m + n; x++)
    {
        if (j < n && i < m && nums1[i] < nums2[j])
        {
            mer[x] = nums1[i];
            i++;
        }
        else if (j < n && i<m && nums1[i]>nums2[j])
        {
            mer[x] = nums2[j];
            j++;
        }
        else if (j < n && i < m && nums1[i] == nums2[j])
        {
            mer[x] = nums1[i];
            i++;
        }

        if (i == m || j == n)
        {
            break;
        }
    }

    if (i < m)
    {
        for (; i < m; i++)
        {
            if (i != 0 || j != 0)
                x++;
            mer[x] = nums1[i];
        }
    }

    if (j < n)
    {
        for (; j < n; j++)
        {
            if (i != 0 || j != 0)
                x++;
            mer[x] = nums2[j];
        }
    }

    for (int z = 0; z < m + n; z++)
    {
        nums1[z] = mer[z];
    }
}
int main()
{
    int nums1[] = {1,0};
    int nums2[] = {2};
    merge(nums1, sizeof(nums1) / sizeof(nums1[0]), 1, nums2, sizeof(nums2) / sizeof(nums2[0]), 1);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int FirstNotRepeatingChar(char* str) {
    // write code here
    int arr[24] = { 0 };

    for (int i = 0; i < strlen(str); i++)
    {
        arr[(*(str + i)) - 'a']++;
    }

    int i = 0;
    for (i = 0; i < 24; i++)
    {
        if (arr[i] == 1)
            break;
    }

    if (i < 24)
    {
        for (int j = 0; j < strlen(str); j++)
        {
            if (*(str + j) == (i + 'a'))
                return j;
        }
    }

    return -1;
}

int main()
{
    char str[] = "google";
    printf("%d", FirstNotRepeatingChar(str));
   

    return 0;
}
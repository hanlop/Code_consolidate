#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��
#define max(n) ((n)*(n))

int main()
{
	int x = 0;
	scanf("%d", &x);

	int a = max(x);

	printf("%d", a);

	return 0;
}
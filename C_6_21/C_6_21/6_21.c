#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{	
	//���ļ�
	FILE* pf = fopen("test.txt", "w");

	//д�ļ�
	fputc('c', pf);
	fputc('d', pf);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}
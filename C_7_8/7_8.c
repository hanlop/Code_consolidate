#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int n=fgetc(stdin);
//
//	fputc(n, stdout);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	printf("%d", a);
//
//	return 0;
//}


//int main() {
//    FILE* file;
//    char buffer[100];
//
//    // ��׷�Ӷ�дģʽ���ļ�
//    file = fopen("example.txt", "a+");
//    if (file == NULL) {
//        perror("�޷����ļ�");
//        return 1;
//    }
//
//    // ��ȡ�ļ����ݲ���ӡ
//    fgets(buffer, sizeof(buffer), file);
//    printf("��ȡ�����ݣ�%s", buffer);
//
//    // ��ָ���ƶ����ļ�ĩβ������д�����
//    //fseek(file, 0, SEEK_SET);
//    fputs("׷������!\n", file);
//
//    // �ر��ļ�
//    if (fclose(file) != 0) {
//        perror("�޷��ر��ļ�");
//        return 1;
//    }
//
//    return 0;
//}

//int main()
//{
//	FILE* p = fopen("example.txt", "a+");
//	if (p == NULL)
//	{
//		perror("�ļ�����ʧ��");
//		return 1;
//	}
//	
//	char* buffer[100] = { 0 };
//	fgets(buffer, sizeof(buffer), p);
//
//
//	printf("%s", buffer);
//
//	fclose(p);
//	p = NULL;
//
//	return 0;
//}


//#include <stdio.h>

//int main() {
//    FILE* file;
//    char buffer[100];
//
//    // ��׷�Ӷ�дģʽ���ļ�
//    file = fopen("example.txt", "a+");
//    if (file == NULL) {
//        perror("�޷����ļ�");
//        return 1;
//    }
//
//    // ��ָ���ƶ����ļ���ͷ��д�����ݣ��ⲻ��a+ģʽ������ʹ�÷�ʽ��
//    fseek(file, 0, SEEK_SET);
//    fputs("����ԭ������!\n", file);
//
//    // ��ָ���ƶ����ļ���ͷ����ȡ�ļ����ݲ���ӡ
//    fseek(file, 0, SEEK_SET);
//    while (fgets(buffer, sizeof(buffer), file) != NULL) {
//        printf("��ȡ�����ݣ�%s", buffer);
//    }
//
//    // �ر��ļ�
//    if (fclose(file) != 0) {
//        perror("�޷��ر��ļ�");
//        return 1;
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    FILE* file;
//
//    // ��׷�Ӷ�дģʽ���ļ�
//    file = fopen("example.txt", "a+");
//    if (file == NULL) {
//        perror("�޷����ļ�");
//        return 1;
//    }
//
//    // ��ָ���ƶ����ļ���ͷ����ȡ�ļ����ݲ���ӡ
//    fseek(file, 0, SEEK_SET);
//    char buffer[100];
//    fgets(buffer, sizeof(buffer), file);
//    printf("��ȡ�����ݣ�%s", buffer);
//
//    // ��ָ���ƶ����ļ�ĩβ��׷������
//    fseek(file, 0, SEEK_END);
//    fputs("׷������!", file);
//
//    // �ر��ļ�
//    if (fclose(file) != 0) {
//        perror("�޷��ر��ļ�");
//        return 1;
//    }
//
//    return 0;
//}

//int main()
//{
//	д��
//	FILE* pflie = fopen("test.txt", "w+");
//
//	���ļ�ʧ��,ֱ���˳�����
//	if (pflie == NULL)
//	{
//		return 1;
//	}
//
//	���ļ�д����Ϣ
//	fputs("abcdef", pflie);
//
//	 ���ļ�ָ�����¶�λ���ļ���ͷ
//	fseek(pflie, 0, SEEK_SET);
//
//	char* str1[10] = { 0 };
//	fgets(str1, 6, pflie);
//
//	printf("%s", str1);
//
//	fclose(pflie);
//	pflie = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pflie = fopen("test.txt", "r");
//
//	if (pflie == NULL)
//	{
//		perror("���ļ�����:");
//		return 1;
//	}
//
//	int c = 0;
//	while ((c = fgetc(pflie)) != EOF)
//	{
//		printf("%c", c);
//	}
//
//	fclose(pflie);
//
//	return 0;
//}

//int main()
//{
//	FILE* pflie = fopen("test.txt", "wb");
//
//	if (pflie == NULL)
//	{
//		perror("���ļ�����:");
//		return 1;
//	}
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	fwrite(arr, sizeof(int), 10, pflie);
//
//
//	fclose(pflie);
//
//	return 0;
//}

//int main()
//{
//	FILE* pflie = fopen("test.txt", "rb");
//
//	if (pflie == NULL)
//	{
//		perror("���ļ�����:");
//		return 1;
//	}
//
//	int arr[10] = {0};
//	size_t read_num = fread(arr, sizeof(int), 10, pflie);
//	if (read_num!=10)
//	{
//		perror("��ȡ���ݷ�������\n");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	FILE* pflie = fopen("test.txt", "w");
//	
//	if (pflie == NULL)
//	{
//		perror("���ļ�����:");
//		return 1;
//	}
//
//	fprintf(pflie, "�������%s", "�������");
//
//	fclose(pflie);
//
//	return 0;
//}


//int main()
//{
//	//FILE* pflie = fopen("test.txt", "w");
//
//	//if (pflie == NULL)
//	//{
//	//	perror("���ļ�����:");
//	//	return 1;
//	//}
//
//	char arr[100] = { 0 };
//	sprintf(arr, "�������%s", "�������");
//
//	printf("%s", arr);
//
//	//fclose(pflie);
//
//	return 0;
//}


//int main()
//{
//	FILE* pflie = fopen("test.txt", "r");
//
//	if (pflie == NULL)
//	{
//		perror("���ļ�����:");
//		return 1;
//	}
//
//	fseek(pflie, 2, SEEK_SET);
//	char arr[100] = { 0 };
//	fgets(arr, 2, pflie);
//
//	printf("%s", arr);
//
//	rewind(pflie);
//	fgets(arr, 2, pflie);
//	printf("%s", arr);
//
//	int n=ftell(pflie);
//	printf("%d", n);
//
//	fclose(pflie);
//
//	return 0;
//}


//#include <stdio.h>

//int main() {
//    FILE* file = fopen("example.txt", "rb");
//    if (file == NULL) {
//        perror("�޷����ļ�");
//        return 1;
//    }
//
//    // ���ļ�ָ���ƶ����ļ���ͷ֮��� 10 ���ֽڴ�
//    fseek(file, 10, SEEK_SET);
//
//    // ��ȡ�ļ�ָ��ĵ�ǰλ��
//    long int position = ftell(file);
//    if (position != -1L) {
//        printf("Current position: %ld\n", position);
//    }
//
//    int ch = 0;
//    while ((ch = fgetc(file)) != EOF)
//    {
//
//    }
//
//    if (feof(file))
//    {
//        printf("�Ѿ������β");
//    }
//
//    fclose(file);
//    return 0;
//
#include <Windows.h>
int main() {
    FILE* file = fopen("example1.txt", "w");
    if (file == NULL) {
        perror("�޷����ļ�");
        return 1;
    }


    fputs("ˢ�»�����", file);
    //˯��10��,������ʱ���ļ���,��û�����ݵ�
    Sleep(10000);
    
    //ûˢ�»�����ǰ.���ݲ���д���ļ���
    fflush(file);
    Sleep(1000);

    //fclose�ر��ļ���ʱ��,Ҳ��ˢ�»�����
    fclose(file);
    return 0;
}
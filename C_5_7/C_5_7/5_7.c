#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> // ���������
#include <time.h>  // ����ʱ��
#include <windows.h> // ���� Sleep ����

// ����ն���Ļ
void clear_screen() {
    // Windows �ض����������Ļ
    system("cls");
}

// ���������ɫ��ANSIת����
const char* random_color() {
    // ����16ɫ������ɫ��
    static const char* colors[] = {
        "\033[31m", // ��ɫ
        "\033[32m", // ��ɫ
        "\033[33m", // ��ɫ
        "\033[34m", // ��ɫ
        "\033[35m", // ��ɫ
        "\033[36m", // ��ɫ
        "\033[37m", // ��ɫ
        "\033[91m", // ����ɫ
        "\033[92m", // ����ɫ
        "\033[93m", // ����ɫ
        "\033[94m", // ����ɫ
        "\033[95m", // ����ɫ
        "\033[96m", // ����ɫ
        "\033[97m"  // ����ɫ
    };

    int index = rand() % (sizeof(colors) / sizeof(colors[0]));
    return colors[index];
}

int main() {
    // ���������
    srand(time(NULL));

    // �����������Ĵ���
    int blink_count = 10;
    // ÿ������֮��ĵȴ�ʱ��
    int delay = 500; // 500���� = 0.5��

    for (int i = 0; i < blink_count; i++) {
        // �����Ļ
        clear_screen();

        if (i % 2 == 0) {
            // ��ȡ�����ɫ
            const char* color = random_color();
            printf("%s", color); // ������ɫ
            printf("��Ŀ��ͨ��\n"); // ��ʾ����
            printf("\033[0m"); // ������ɫ
        }

        // �ȴ�һ��ʱ��
        Sleep(delay); // 0.5��
    }

    return 0;
}
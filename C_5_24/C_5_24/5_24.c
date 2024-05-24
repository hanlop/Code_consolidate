#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//
//#define WIDTH 40
//
//void clear_screen() {
//    // ʹ��ϵͳ��������
//    system("cls");
//}
//
//int main() {
//    int position = 0;
//    int direction = 1;
//
//    while (1) {
//        clear_screen();
//        for (int i = 0; i < WIDTH; i++) {
//            if (i == position) {
//                printf("O");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//
//        position += direction;
//        if (position == 0 || position == WIDTH - 1) {
//            direction = -direction;
//        }
//
//        Sleep(100); // ��ʱ100����
//    }
//
//    return 0;
//}
#include <stdio.h>
#include <windows.h>

#define WIDTH 40
#define SPEED 50 // �����ٶȣ���ֵԽС���ٶ�Խ��

void clear_screen() {
    // ʹ��ϵͳ��������
    system("cls");
}

void set_console_color(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void print_banner() {
    printf("***** ��ӭ����������ʾ *****\n");
    printf("�� Ctrl+C ֹͣ\n\n");
}

int main() {
    int position = 0;
    int direction = 1;
    int color = 1;

    print_banner();

    while (1) {
        clear_screen();
        print_banner();

        set_console_color(color);
        for (int i = 0; i < WIDTH; i++) {
            if (i == position) {
                printf("O");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");

        position += direction;
        if (position == 0 || position == WIDTH - 1) {
            direction = -direction;
            color = (color % 15) + 1; // �ı���ɫ
        }

        Sleep(SPEED); // ��ʱ�����ٶ�
    }

    return 0;
}
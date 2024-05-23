#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//
//#define WIDTH 40
//
//void clear_screen() {
//    // 使用系统命令清屏
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
//        Sleep(100); // 延时100毫秒
//    }
//
//    return 0;
//}
#include <stdio.h>
#include <windows.h>

#define WIDTH 40
#define SPEED 50 // 控制速度，数值越小，速度越快

void clear_screen() {
    // 使用系统命令清屏
    system("cls");
}

void set_console_color(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void print_banner() {
    printf("***** 欢迎来到动画演示 *****\n");
    printf("按 Ctrl+C 停止\n\n");
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
            color = (color % 15) + 1; // 改变颜色
        }

        Sleep(SPEED); // 延时控制速度
    }

    return 0;
}
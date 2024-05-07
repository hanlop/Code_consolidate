#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> // 用于随机数
#include <time.h>  // 用于时间
#include <windows.h> // 用于 Sleep 函数

// 清除终端屏幕
void clear_screen() {
    // Windows 特定方法清除屏幕
    system("cls");
}

// 返回随机颜色的ANSI转义码
const char* random_color() {
    // 基于16色基础颜色集
    static const char* colors[] = {
        "\033[31m", // 红色
        "\033[32m", // 绿色
        "\033[33m", // 黄色
        "\033[34m", // 蓝色
        "\033[35m", // 紫色
        "\033[36m", // 青色
        "\033[37m", // 白色
        "\033[91m", // 亮红色
        "\033[92m", // 亮绿色
        "\033[93m", // 亮黄色
        "\033[94m", // 亮蓝色
        "\033[95m", // 亮紫色
        "\033[96m", // 亮青色
        "\033[97m"  // 亮白色
    };

    int index = rand() % (sizeof(colors) / sizeof(colors[0]));
    return colors[index];
}

int main() {
    // 随机数种子
    srand(time(NULL));

    // 让内容闪动的次数
    int blink_count = 10;
    // 每次闪动之间的等待时间
    int delay = 500; // 500毫秒 = 0.5秒

    for (int i = 0; i < blink_count; i++) {
        // 清除屏幕
        clear_screen();

        if (i % 2 == 0) {
            // 获取随机颜色
            const char* color = random_color();
            printf("%s", color); // 设置颜色
            printf("科目二通过\n"); // 显示内容
            printf("\033[0m"); // 重置颜色
        }

        // 等待一段时间
        Sleep(delay); // 0.5秒
    }

    return 0;
}
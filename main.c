//请在下方输入你的代码：
#include <stdio.h>

int main() {
    // 正三角
    printf("正三角九九乘法表：\n");
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d×%d=%-2d ", j, i, i * j);
        printf("\n");
    }

    // 倒三角
    printf("\n倒三角九九乘法表：\n");
    for (int i = 9; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("%d×%d=%-2d ", j, i, i * j);
        printf("\n");
    }

    return 0;
}
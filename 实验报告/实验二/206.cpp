#include <stdio.h>
int main()
{
    int a, b, c, e, f, g;
    printf("请输入两个正数:");
    scanf_s("%d%d", &a, &b);
    e = a;
    f = b;
    c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    g = e * f / b;
    printf("最大公约数是 %d\n最小公倍数是 %d\n", b, g);
    return 0;
}
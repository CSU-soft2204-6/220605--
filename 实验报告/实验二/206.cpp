#include <stdio.h>
int main()
{
    int a, b, c, e, f, g;
    printf("��������������:");
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
    printf("���Լ���� %d\n��С�������� %d\n", b, g);
    return 0;
}
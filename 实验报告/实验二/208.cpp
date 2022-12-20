#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float x0, x1;
    scanf_s("%f", &a);
    if (a < 0)
    {
        printf("被开方数不能为零");
    }
    else
    {
        x0 = a / 2;
        x1 = (x0 + a / x0) / 2;
        while (fabs(x1 - x0) >= 1e-10)
        {
            x0 = x1;
            x1 = (x0 + a / x0) / 2;
        }
        printf("%1.10f", x1);
    }
    return 0;
}
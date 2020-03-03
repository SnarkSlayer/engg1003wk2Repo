#include <stdio.h>

int main()
{
    float x1, x2, x3, x4, samp, mean;
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);

    mean = (1.0/4.0)(x1 + x2 + x3 + x4);
    x1 -= mean;
    x2 -= mean;
    x3 -= mean;
    x4 -= mean;
    samp = (1.0/3.0)(x1x1 + x2x2 + x3x3 + x4x4);

    printf("%f", samp);

    return 0;
}

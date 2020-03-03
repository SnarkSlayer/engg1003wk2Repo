
#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x, y;

    scanf("%f %f\n", &x1, &y1);
    scanf("%f %f\n", &x2, &y2);
    scanf("%f", &x);

    y = ((y2 - y1)/(x2 - x1)) * (x - x1) + y1;

    printf("%f", y);

    return 0;
}

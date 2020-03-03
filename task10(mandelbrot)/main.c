#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iterations = 0;
    float x, y, x1, y1, xtemp;
    printf("Enter a complex number in the format (x + [-]yi)\n");
    scanf("%f + %fi", &x, &y);

    while((x1*x1 + y1*y1 < 4) && iterations < 1000) {
        xtemp = x1*x1 - y1*y1 + x;
        y1 = 2*x1*y1 + y;
        x1 = xtemp;
        iterations++;
    }

    printf("Total iterations: %d", iterations);

    return 0;
}

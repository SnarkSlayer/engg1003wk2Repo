#include <stdio.h>
#include <stdlib.h>

float calc(float ans, float n) {
    float ans1 = ans;
    ans = (1.0/2.0)*(ans + (n/ans));
    if(abs(ans - ans1) > 0.0000001) {
        calc(ans, n);
    } else {
        return ans;
    }
}

int main()
{
    float a, b, c;
    printf("Enter 3 coefficients of a quadratic:\n");
    scanf("%f\n%f\n%f\n", &a, &b, &c);
    float D = b*b - 4.0*a*c;

    if(D < 0) {
        printf("There are no real solutions");
    } else if(D == 0) {
        float solu = -b/(2*a);
        printf("There is one solution: %f", solu);
    } else if(D > 0) {
        float solu1, solu2;
        solu1 = -b + (calc(D,D)/(2*a));
        solu2 = -b - (calc(D,D)/(2*a));
        printf("There are two solutions: %f, %f", solu1, solu2);
    }

    return 0;
}

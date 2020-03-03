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
    float n, ans;
    printf("Enter an integer to find the square root of: ");
    scanf("%f", &n);
    printf("Enter a guess of the root: ");
    scanf("%f", &ans);

    ans = calc(ans, n);
    printf("The square root of %d is about: %f", (int)n, ans);

    return 0;
}

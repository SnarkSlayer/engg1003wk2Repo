#include <stdio.h>

int main()
{
    int a, b, q, r;
    printf("Please enter two numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(b == 0) {
        printf("A division by zero error has occured");
    } else {
        q = a/b;
        r = a%b;
        printf("%d/%d is %d\nwith a remainder of %d", a, b, q, r);
    }

    return 0;
}

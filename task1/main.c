#include <stdio.h>

int main()
{
    float celius, faren;

    scanf("%f", &faren);
    celius = ((5.0/9.0) * (faren - 32.0));
    printf("%.2f", celius);

    return 0;
}

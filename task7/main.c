#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int threeHappend = 0;
    int rand1, rand2;

    while(count < 1000) {
        rand1 = rand() % 6 + 1;
        rand2 = rand() % 6 + 1;
        if(rand1 == 3 || rand2 == 3) {
            threeHappend++;
        }
        count++;
    }
    printf("%f", ((float)threeHappend/(float)count));

    return 0;
}

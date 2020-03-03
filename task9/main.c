#include <stdio.h>
#include <stdlib.h>

int main()
{
    int countTot = 0;
    int countIns = 0;

    while(countTot < 100000000) {
        float x = (float)rand()/RAND_MAX;
        float y = (float)rand()/RAND_MAX;
        countTot++;
        if(x*x + y*y < 1.0) {
            countIns++;
        }
    }
    printf("Pi is about: %f", (4.0*countIns/countTot));

    return 0;
}

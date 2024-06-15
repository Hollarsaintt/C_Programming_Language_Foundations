#include <stdio.h>
int main(void) {
    int cityPop, numberInfected = 1, day = 1;
    scanf("%d", &cityPop);

    while(numberInfected < cityPop)
    {
        day++;
        numberInfected = numberInfected + numberInfected * 2;
    }

    printf("%d", day);
    return 0;
}

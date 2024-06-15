
#include <stdio.h>
int main(void) {
    int numberOfPassengers; float gasPrice;
    scanf("%d%f", &numberOfPassengers, &gasPrice);

    if(numberOfPassengers)
    {
        printf("%.2lf", (1 + gasPrice) / (numberOfPassengers + 1));
    }
    else{
        printf("%.2lf", gasPrice);
    }
    return 0;
}

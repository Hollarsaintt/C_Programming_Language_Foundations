#include <stdio.h>
int main(void) {

    int i, numberOfCars; double inputWeight, totalWeight = 0.0, evenWeight;
    scanf("%d", &numberOfCars);

    double weights[numberOfCars];
    for(i=0; i < numberOfCars; i++)
    {
        scanf("%lf", &inputWeight);
        weights[i] = inputWeight;
        totalWeight = totalWeight + inputWeight;
    }

    evenWeight = totalWeight / numberOfCars;
    for(i = 0; i < numberOfCars; i++)
    {
        if(weights[i] != evenWeight)
        {
            printf("%.1lf\n", evenWeight - weights[i]);
        }
        else{
            printf("%.1lf\n", evenWeight);
        }

    }
    return 0;
}

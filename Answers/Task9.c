#include <stdio.h>

int main(void)
{
    int i, recipesNumber;
    scanf("%d", &recipesNumber);
    double unitPrice[recipesNumber], weights[recipesNumber], totalPrice = 0;

    for(i=0; i < 2 * recipesNumber; i++)
    {
       if (i < recipesNumber)
            scanf("%lf", &unitPrice[i]);
        else{
            scanf("%lf", &weights[i-recipesNumber]);
        }
    }

    for(i = 0; i < recipesNumber; i++)
    {
        totalPrice = totalPrice + (unitPrice[i] * weights[i]);
    }

    printf("%.6lf", totalPrice);
    return 0;
}

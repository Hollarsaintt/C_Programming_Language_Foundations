#include <stdio.h>
int main(void) {

    int readValue, ingQuantities[10];
    for(int i = 0; i < 11; i++)
    {
        scanf("%d", &readValue);
        if (i < 10)
            ingQuantities[i] = readValue;
        else{
            printf("%d", ingQuantities[readValue]);
        }
    }
    return 0;
}

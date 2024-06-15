#include <stdio.h>
int main(void) {
    int i, numberOfcities, count = 0, input;

    scanf("%d", &numberOfcities);
    for(i = 0; i < numberOfcities; i++)
    {
        scanf("%d", &input);
        if(input > 10000)  count++;
    }

    printf("%d", count);
    return 0;
}

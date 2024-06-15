#include <stdio.h>
int main(void) {

    int expenses = 0, sum = 0;
    while (expenses != -1)
    {
        sum = sum + expenses;
        scanf("%d", &expenses);

    }

    printf("%d", sum);
    return 0;
}

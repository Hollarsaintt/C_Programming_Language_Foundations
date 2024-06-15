#include <stdio.h>

int main()
{
    int hoursAfterNoon, pay;
    scanf("%d", &hoursAfterNoon);
    pay = (10 + hoursAfterNoon * 5 <= 53);

    if(pay)
    {
        printf("%d", 10 + hoursAfterNoon * 5);
    }
    else{
        printf("%d", 53);
    }
    return 0;
}

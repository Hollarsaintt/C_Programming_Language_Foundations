#include <stdio.h>

int main()
{
    int minSafe, maxSafe, temp;
    scanf("%d%d%d", &minSafe, &maxSafe, &temp);

    while(temp != -999)
    {
        if(temp >= minSafe && temp <= maxSafe)
        {
            printf("Nothing to report\n");
            scanf("%d", &temp);
        }
        else
        {
            printf("Alert!");
            temp = -999;
        }

    }
    return 0;
}

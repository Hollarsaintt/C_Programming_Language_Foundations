#include <stdio.h>

int main()
{
    int weight1 = 0, weight2 = 0, playerNumber, tempWeight;
    scanf("%d", &playerNumber);

    for(int i = 0; i< (2*playerNumber); i++)
    {
        scanf("%d", &tempWeight);
        if(i%2 == 0)
        {
            weight1 += tempWeight;
        }
        else
        {
            weight2 += tempWeight;
        }
    }
   /*Team 1 has an advantage
Total weight for team 1: 452
Total weight for team 2: 440*/
    if(weight1 > weight2)
    {
        printf("Team 1 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d\n", weight1, weight2);
    }
    else{
        printf("Team 2 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d\n", weight1, weight2);
    }

    return 0;


}

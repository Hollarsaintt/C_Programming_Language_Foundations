#include <stdio.h>

int main()
{
    char word[51]; int i, l = 0, fHalf  = 0;
    int found = 0;
    scanf("%s", word);

    while(word[l] != '\0') l++;

    if(l % 2)
    {
        fHalf = (l / 2) + 1;
    }
    else{
        fHalf = l / 2;
    }

    for( i = 0;  i < fHalf; i++)
    {
        if(word[i] == 't' || word[i] == 'T') {
            printf("1"); found = 1;
        }
    }

    for( i = fHalf;  i < l; i++)
    {
        if(word[i] == 't' || word[i] == 'T') {
            printf("2"); found = 1;
        }
    }
    if(!found) printf("-1");
    return 0;
}

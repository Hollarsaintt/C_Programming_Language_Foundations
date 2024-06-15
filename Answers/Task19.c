#include <stdio.h>

int main()
{
    int i, nbwords, l = 0, max = 0; char word[100];

    scanf("%d", &nbwords);
    for(i = 0; i < nbwords; i++)
    {
        scanf("%s", word);
        l = 0;
        while(word[l] != '\0')
        {
            l++;
        }
        if(l > max) max = l;
    }
    printf("%d", max);
    return 0;
}

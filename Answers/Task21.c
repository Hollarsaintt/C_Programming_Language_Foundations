#include <stdio.h>

int main()
{
    char word[51];
    scanf("%s", word);
    int k, d, i = 0, count = 0, l = 0;
    char swap, track;

    while(word[l] != '\0') l++; //l holds word length

    // The two loop below use bubble sort to sort the char array word
    // from smallest to largest according to ASCII numeric representation
    for(k = 0; k < l-1; k++)
    {
        for(d = 0; d < l-1; d++)
        {
            if(word[d] > word[d+1])
            {
                swap = word[d]; word[d] = word[d+1]; word[d+1] = swap;

            }
        }
    }

    while((word[i] != '\0') && (i < l) && (i + 1 < l))
    {
        track = word[i];
        if(word[i] ==  word[i+1])
        {
            count++;
            i = i + 2;
            while(word[i] == track) i++; //if the same character is seen again, increase i further

        }
        else i++;
    }
    printf("%d", count);
    return 0;
}

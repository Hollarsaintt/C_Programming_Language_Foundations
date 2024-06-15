#include <stdio.h>

int main()
{
    char word[50];
    scanf("%s", word);
    int i = 0;

    while(word[i] != '\0')
    {
        i++;
    }

    int decision = i % 2;
    if(decision)
    {
        printf("2\n");
    }
    else
    {
        printf("1\n");
    }
    return 0;
}

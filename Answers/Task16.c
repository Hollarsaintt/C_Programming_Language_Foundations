#include <stdio.h>

int main()
{
    int n; char word[101];
   // scanf("%d%s", &n, word);
   scanf("%d", &n); scanf("%s", word);

    for(int i = 0; i < n; i++)
    {
        printf("%s\n", word);
    }
    return 0;
}

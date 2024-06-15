#include <stdio.h>

int main()
{
    int i, n; char word1[101], word2[101];
   // scanf("%d%s", &n, word);
   scanf("%d", &n);

   for(i = 0; i < n; i++)
   {
          scanf("%s%s", word1, word2);
          printf("%s %s\n", word2, word1);
   }

    return 0;
}

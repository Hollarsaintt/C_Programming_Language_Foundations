#include <stdio.h>
int main(void) {
   int right, guess, tries = 1;
   scanf("%d%d", &right, &guess);
   while(guess != right)
   {
       if(guess < right)
       {
           printf("it is more\n");
       }
       else{
           printf("it is less\n");
       }
       tries++;
       scanf("%d", &guess);
   }

   printf("Number of tries needed: \n%d", tries);

    return 0;
}

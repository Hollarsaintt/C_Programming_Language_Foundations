#include <stdio.h>

int main()
{
    int n1, n2, con;
    scanf("%d%d", &n1, &n2);

    con = ((n1 + n2) >= 10);
    if(con)
    {
        printf("Special tax\n%d", 36);
    }
    else{
        printf("Regular tax\n%d", 2 * (n1+n2));
    }
    return 0;


}

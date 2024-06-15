#include <stdio.h>
int main(void) {

    int age, weight;
    scanf("%d%d", &age, &weight);

    if(age != 60 && age >= 10 && weight > 20)
    {
        printf("40");
    }else{
        if(age == 60) printf("0");
        if(age < 10) printf("5");
        if(age != 60 && age >= 10 && weight < 20) printf("30");
    }

    return 0;
}

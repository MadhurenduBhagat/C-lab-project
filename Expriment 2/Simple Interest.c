#include <stdio.h>
#include <stdlib.h>

int main()
{
    float SI,principle,rate,time;
    printf("enter the value of principle:");
    scanf("%f",&principle);
    printf("enter the value of rate:");
    scanf("%f",&rate);
    printf("enter the value of time:");
    scanf("%f",&time);
    SI=(principle*rate*time)/100;
    printf("Simple interest of the following value is %f",SI);


    return 0;
}

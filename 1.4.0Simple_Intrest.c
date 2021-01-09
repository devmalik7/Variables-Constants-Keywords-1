#include<stdio.h>
void main()
{
    float p,r,t;
    printf("Enter Principl Ammount rate and time ");
    scanf("%f", &p);
    scanf("%f", &r);
    scanf("%f", &t);
    printf("The Simple Intrest calculated is %f", (p*r*t)/100);
}

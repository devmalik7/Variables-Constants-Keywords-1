#include<stdio.h>
int main()
{
    float c;
    printf("Enter the temperature in Celsius\n");
    scanf("%f",& c);
    float f=(c*9/5)+32;
    printf("Temperature in farhenheit is %f", f);
}

#include<stdio.h>
int main()
{
    float c;
    printf("This code will convert Celsius temperature to fahrenheit\n");
    printf("Enter the temperature in Celsius\n");
    scanf("%f",& c);
    float f=(c*9/5)+32;
    printf("Temperature in farhenheit is %f", f);
}
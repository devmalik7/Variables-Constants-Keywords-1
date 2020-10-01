#include<stdio.h>
int main()
{
    int r;
    float pi=3.14;
    printf("For calculating area of Circle \n");
    printf("Enter the radius of circle \n");
    scanf("%d",& r);
    printf("The area of Circle is %f", r*r*pi );
    printf("\nFor claculating volume of Cylinder \n");
    int h;
    printf("Enter the height of cylinder \n");
    scanf("%d",& h);
    printf("Enter the Radius of cylinder \n");
    scanf("%d",& r);
    printf("The volume of cylinder is %f", pi*r*r*h);
    return 0;
}
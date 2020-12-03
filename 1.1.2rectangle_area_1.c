#include<stdio.h>
int main()
{
    int area=0,len,bre;//taking length breadth,area
    printf("Enter the length and breadth of rectangle \n");
    scanf("%d",&len,&bre); //tking the input 
    area=len*bre;// getting the area 
    printf("The area of rectangle is %d",area);//printing the area
    return 0;//returning the main
}

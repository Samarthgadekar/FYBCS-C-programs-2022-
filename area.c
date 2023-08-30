// Write a ‘C’ program to calculate area and perimeter of a rectangle.
#include<stdio.h>
int main()
{
int length,width,area,perimeter;
printf("Enter length and width::");
scanf("%d%d",&length,&width);
area=length*width;
perimeter=2*length+2*width;
printf("area=%d",area);
printf("\nperimeter=%d",perimeter);
}

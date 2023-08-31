// c program to find factor of a number.
#include<stdio.h>
int main()
{
 int num,i;
printf("enter a number to find factor:");
scanf("%d",&num);
printf("factor of %d are:",num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
printf("\n%d",i);
}
   }
     }


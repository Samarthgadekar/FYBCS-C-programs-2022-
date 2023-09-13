//Write a program to calculate length of string using standard library function
#include<stdio.h>
#include<string.h>
int main()
{
int len;
char str[20];
printf("enter string:");
scanf("%s",str);
len=strlen(str);
printf("\nlength of string=%d",len);
}


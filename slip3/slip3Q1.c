//Write a program to calculate length of string using standard library function
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int len;
 char str[20];
 printf("Enter string::");
 scanf("%s",str);
 len=strlen(str);
 printf("length of string=%d",len);
 }

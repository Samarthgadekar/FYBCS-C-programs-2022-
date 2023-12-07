//Write a program to concatenate two strings (use predefined function).

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char str1[20],str2[20];
  
  printf("enter frist string::");
  scanf("%s",str1);
  printf("enter second string::");
  scanf("%s",str2);
  strcat(str1,str2);
  printf("\n concatenate string=%s",str1);
  }
  

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
   FILE *fp1,*fp2;
   char ch;
   fp1=fopen("a.txt","r");
   fp2=fopen("b.txt","w");
   if(fp1==NULL)
   {
     printf("\n file not found....");
     exit(0);
     }
  while(!feof(fp1))
  {
    ch=fgetc(fp1);
     if(isupper(ch))
     fputc(tolower(ch),fp2);
     else if(islower(ch))
     fputc(toupper(ch),fp2);
     }
  fclose(fp1);
  fclose(fp2);
  printf("\n file copy succesfully.....");
  }
  

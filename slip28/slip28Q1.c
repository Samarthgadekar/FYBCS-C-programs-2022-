// Write a C program to calculate SQUARE of given number using MACRO.
#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
 printf("Square of %d is: %d\n", num, SQUARE(num));
 return 0;
}

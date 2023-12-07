/*Write a C program that accepts a string and character to search. The program will call a function, which will search for the position of occurrence of the character in the string and return its position. Function should return –1 if the character is not found in the string.*/
#include<stdio.h>
#include<string.h>

int search(char s1[100], char ch);

int main()
{
    char s1[100], ch;
    int p;

    printf("Enter string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter char to search: ");
    scanf(" %c", &ch);  // Added space before %c to consume the newline character

    p = search(s1, ch);

    if (p == -1)
        printf("Char is not found...");
    else
        printf("Char is Found at position=%d", p);

    return 0;
}

int search(char s1[100], char ch)
{
    int i, p = -1;

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == ch)
            p = i;
    }

    return p;
}

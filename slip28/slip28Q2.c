/* ii. Write a menu driven C program to perform the following operations 
on strings using standard library functions: 
a. Convert string to lowercase 
b. Compare two strings 
*/

#include <stdio.h>
#include <string.h>

int main() {
    int ch, k;
    char s1[100], s2[100];
    
    do {
        printf("\nEnter string 1: ");
        scanf("%s", s1);
        printf("Enter string 2: ");
        scanf("%s", s2);
        
        printf("\n1-Convert string to lowercase \n2-Compare two strings");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                
                for (int i = 0; s1[i]; i++)
                    s1[i] = tolower(s1[i]);
                for (int i = 0; s2[i]; i++)
                    s2[i] = tolower(s2[i]);

                printf("\nFirst string to lowercase: %s", s1);
                printf("\nSecond string to lowercase: %s", s2);
                break;

            case 2:
                k = strcmp(s1, s2);
                if (k > 0)
                    printf("First string is greater: %s", s1);
                else if (k < 0)
                    printf("Second string is greater: %s", s2);
                else
                    printf("Both strings are the same.");
                break;

            default:
                printf("\nInvalid Choice....");
        }

    } while (ch < 3);

    return 0;
}

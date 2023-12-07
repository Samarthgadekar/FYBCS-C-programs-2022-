/* Write a menu driven program using standard library function 
1) To find Length of string 
2) To compare two strings 
3) To copy one string to other. 
4) To concatenate two strings */
#include <stdio.h>
#include <string.h>

int main() {
    int ch, k;
    char s1[100], s2[100];

    do {
        printf("\n Enter string 1:");
        scanf("%s", s1);
        printf("\n Enter string 2:");
        scanf("%s", s2);
        printf("\n 1-Length \n2-Compare \n3-copy \n4-Concat \n5-Exit");
        printf("\n Enter choice:");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\n First string length=%lu", strlen(s1)); // Use %lu for size_t
                printf("\n Second string length=%lu", strlen(s2));
                break;

            case 2:
                k = strcmp(s1, s2);
                if (k > 0)
                    printf("First string Greater=%s", s1);
                else if (k < 0)
                    printf("Second string Greater=%s", s2);
                else
                    printf("Same string.");
                break;

            case 3:
                strcpy(s1, s2);
                printf("\n Copy string=%s", s1);
                break;

            case 4:
                strcat(s1, s2);
                printf("\n Concatenated string=%s", s1);
                break;

            case 5:
                printf("\n Exiting the program.\n");
                break;

            default:
                printf("\n Invalid Choice....");
        }

    } while (ch != 5);

    return 0;
}


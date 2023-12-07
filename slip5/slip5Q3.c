//Write a program to read the contents of a text file and count the number of characters, lines and words in the file.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *FP1;
    char ch;
    int C1 = 0, C2 = 1, C3 = 0;

    FP1 = fopen("abc.txt", "r");

    if (FP1 == NULL) {
        printf("File not found...");
        
        exit(0);
    }

    while (!feof(FP1)) {
        ch = fgetc(FP1);

        if (isalpha(ch)) {
            C1++;
        } else if (ch == '\n') {
            C2++;
        } else if (ch == ' ' || ch == '\t') {
            C3++;
        }
    }

    printf("Character count = %d\n", C1);
    printf("Line count = %d\n", C2);
    printf("Words count = %d\n", C3);

    fclose(FP1);

    return 0;
}


/* Write a menu driven program to perform the following operations on
strings using user defined functions:
i)Length
ii)Copy */
#include <stdio.h>

int main() {
    char inputString[100];
    char copiedString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);
    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);
    int i = 0;
    while (inputString[i] != '\0') {
        copiedString[i] = inputString[i];
        i++;
    }
    copiedString[i] = '\0';
    printf("Copied string: %s\n", copiedString);

    return 0;
}

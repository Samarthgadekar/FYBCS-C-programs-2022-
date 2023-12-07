/*Write a program to perform the following operations on strings using user defined functions:
a. Length of string
b. Copy one string to another
c. Convert string to uppercase*/

#include <stdio.h>
#include <ctype.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void copyString(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; 
}
void convertToUpperCase(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char inputString[100];
    char copiedString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = stringLength(inputString);
    printf("Length of the string: %d\n", length);

    copyString(copiedString, inputString);
    printf("Copied string: %s\n", copiedString);

    convertToUpperCase(inputString);
    printf("Uppercase string: %s\n", inputString);

    return 0;
}


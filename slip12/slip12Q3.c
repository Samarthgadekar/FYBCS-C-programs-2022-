/*Write a C program to create a structure named book (book_name,
author_name and price) and display all book details having price > ____
in a proper format by passing the structure array as function argument*/
#include <stdio.h>

struct book
{
    char name[20], author_name[20];
    float price;
};

void displayBooks(struct book b[], int n, float minPrice);

int main()
{
    int i, n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct book books[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter Book %d details (name author_name price): ", i + 1);
        scanf("%s %s %f", books[i].name, books[i].author_name, &books[i].price);
    }

    float minPrice;
    printf("Enter the minimum price to display books: ");
    scanf("%f", &minPrice);

    displayBooks(books, n, minPrice);

    return 0;
}

void displayBooks(struct book b[], int n, float minPrice)
{
    printf("\nBooks with price greater than %.2f:\n", minPrice);

    for (int i = 0; i < n; i++)
    {
        if (b[i].price > minPrice)
        {
            printf("\nBook Name: %s", b[i].name);
            printf("\nAuthor Name: %s", b[i].author_name);
            printf("\nPrice: %.2f\n", b[i].price);
        }
    }
}


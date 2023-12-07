/*Write a program to create a structure employee (id, name, salary). Accept 
details of n employees and write a menu driven program to perform the 
following operations. 
i) Search by name 
ii) Display all */

#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    char name[20];
    float sal;
} e1[100];

int main() {
    int i, n, ch;
    char name[20];

    printf("\nEnter limit:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter eid name sal:");
        scanf("%d%s%f", &e1[i].id, e1[i].name, &e1[i].sal);
    }

    do {
        printf("\n1-Search by name\n2-Display all\n3-Exit");
        printf("\nEnter choice:");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter name:");
                scanf("%s", name);
                for (i = 0; i < n; i++) {
                    if (strcmp(e1[i].name, name) == 0) {
                        printf("\nEmployee id=%d", e1[i].id);
                        printf("\nEmployee name=%s", e1[i].name);
                        printf("\nEmployee sal=%f\n", e1[i].sal);
                    }
                }
                break;
            case 2:
                for (i = 0; i < n; i++) {
                    printf("\nEmployee id=%d", e1[i].id);
                    printf("\nEmployee name=%s", e1[i].name);
                    printf("\nEmployee sal=%f \n", e1[i].sal);
                }
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (ch != 3);

    return 0;
}



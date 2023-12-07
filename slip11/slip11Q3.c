/*Write a program to accept details of n employees (id, name, salary).Display all the details. Also, search for an employee by name.*/
#include <stdio.h>
#include <string.h>
struct emp {
    int id;
    char name[20];
    float sal;
} e1[20];

int main() {
    int i, n, ch;
    char nm[20];

    printf("Enter limit: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Emp id name sal: ");
        scanf("%d%s%f", &e1[i].id, e1[i].name, &e1[i].sal);
    }

    do {
        printf("\n1-Display All \n2-Search by Name \n Enter the choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                for (i = 0; i < n; i++) {
                    printf("\nEmp id=%d", e1[i].id);
                    printf("\nEmp name=%s", e1[i].name);
                    printf("\nEmp sal=%f", e1[i].sal);
                }
                break;

            case 2:
                printf("Enter name to search: ");
                scanf("%s", nm);

                for (i = 0; i < n; i++) {
                    if (strcmp(e1[i].name, nm) == 0) {
                        printf("\nEmp id=%d", e1[i].id);
                        printf("\nEmp name=%s", e1[i].name);
                        printf("\nEmp sal=%f", e1[i].sal);
                        break;
                    }
                }

                if (i == n) {
                    printf("Record not found...");
                }
                break;

            default:
                printf("Invalid choice....");
                break;
        }
    } while (ch < 3);

    return 0;
}



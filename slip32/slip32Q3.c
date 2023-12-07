/*Accept details of n students (roll no, name, percentage) using structure.Write a menu driven program for the following:
a. Display all students b. Display all students having percentage > ___*/
#include<stdio.h>
struct student
{
    int rno;
    char sname[20];
    float per;
} s1[100];

int main()
{
    int i, n, ch;
    char name[20];

    printf("Enter limit: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter rno name per: ");
        scanf("%d %s %f", &s1[i].rno, s1[i].sname, &s1[i].per);
    }

    do
    {
        printf("\n1-Display All\n2-Display students with percentage > 80");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                printf("\nStudent no=%d", s1[i].rno);
                printf("\nStudent name=%s", s1[i].sname);
                printf("\nStudent per=%f", s1[i].per);
            }
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                if (s1[i].per > 80)
                {
                    printf("\nStudent no=%d", s1[i].rno);
                    printf("\nStudent name=%s", s1[i].sname);
                    printf("\nStudent per=%f", s1[i].per);
                }
            }
            break;

        default:
            printf("Invalid choice");
        }
    } while (ch < 3);

    return 0;
}


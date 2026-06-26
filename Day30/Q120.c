#include <stdio.h>

int roll[5], marks[5], n;
char name[5][50];

// Function to add student records
void addStudent()
{
    int i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }
}

// Function to display student records
void displayStudent()
{
    int i;

    printf("\n===== Student Records =====\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student by roll number
void searchStudent()
{
    int i, r, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == r)
        {
            printf("\nRecord Found\n");
            printf("Roll : %d\n", roll[i]);
            printf("Name : %s\n", name[i]);
            printf("Marks: %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Record Not Found\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
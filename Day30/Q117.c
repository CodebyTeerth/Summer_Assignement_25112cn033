#include <stdio.h>

int main()
{
    int roll[5], marks[5], n, i;
    char name[5][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input Student Records
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

    // Display Student Records
    printf("\n===== Student Records =====\n");

    printf("Roll\tName\tMarks\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }

    return 0;
}

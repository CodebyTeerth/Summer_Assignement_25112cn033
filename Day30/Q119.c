#include <stdio.h>

int main()
{
    int empId[5], salary[5], n, i;
    char empName[5][50];

    printf("===== Mini Employee Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input Employee Details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Employee Name: ");
        scanf("%s", empName[i]);

        printf("Salary: ");
        scanf("%d", &salary[i]);
    }

    // Display Employee Details
    printf("\n===== Employee Records =====\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", empId[i], empName[i], salary[i]);
    }

    return 0;
}
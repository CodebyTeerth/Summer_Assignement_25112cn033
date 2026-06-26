#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    printf("===== Student Record Management System =====\n");

    // Input Student Details
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Display Student Details
    printf("\n===== Student Record =====\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);

    if (s.marks >= 40)
        printf("Result      : Pass\n");
    else
        printf("Result      : Fail\n");

    return 0;
}

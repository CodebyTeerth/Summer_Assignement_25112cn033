#include <stdio.h>

int main()
{
    char name[50];
    int tickets;
    float price = 200, total;

    printf("===== Ticket Booking System =====\n");

    // Input Customer Details
    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    // Calculate Total Amount
    total = tickets * price;

    // Display Booking Details
    printf("\n===== Booking Details =====\n");
    printf("Customer Name : %s\n", name);
    printf("Ticket Price  : %.2f\n", price);
    printf("No. of Tickets: %d\n", tickets);
    printf("Total Amount  : %.2f\n", total);

    printf("\nTicket Booked Successfully!\n");

    return 0;
}
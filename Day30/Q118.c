#include <stdio.h>

int main()
{
    int bookId[5], n, i;
    char bookName[5][50], author[5][50];

    printf("===== Mini Library System =====\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input Book Details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Book Name: ");
        scanf("%s", bookName[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    // Display Book Details
    printf("\n===== Library Records =====\n");
    printf("ID\tBook Name\tAuthor\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\n", bookId[i], bookName[i], author[i]);
    }

    return 0;
}
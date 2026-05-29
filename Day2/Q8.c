#include <stdio.h>

int main()
{
    int n, n1, remainder, result = 0, original;

    printf("enter the any number");
    scanf("%d", &n);

    n1=n;
    original = n;

    if((n1%10)==0){
        while(n1>0){
        remainder=n1%10;
        n1=n1/10;
        printf("%d",remainder);
        }
    }

    else{

    while (n > 0)
    {
        remainder = n % 10;
        result = result * 10 + remainder;
        n = n / 10;
    }
    }

    if(result==original){
        printf("the given number is palindrome");
    }

    else{
        printf("the given number is not palindrome");
    }
    return 0;
}
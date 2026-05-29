#include <stdio.h>

int main()
{
    int n, n1, remainder, result = 0;

    printf("enter the number for reverse");
    scanf("%d", &n);

    n1=n;

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

    printf("the reverse of the number is : %d", result);
    }
    return 0;
}
#include <stdio.h>
#include<math.h>

int armstrong(int n)
{
    int original = n, result = 0, rem, c=0, n1=n, n2=n;
    if(n==0){
        c=1;
    }

    while (n1 > 0)
    {
        n1 = n1/ 10;
        c++;
    }
    while(n2>0){
         rem = n2 % 10;
         result=result + (int) (pow(rem, c)+0.5);
        n2 = n2/ 10;
    }

    return (original == result);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is a armstrong number.\n", num);
    else
        printf("%d is not a armstrong number.\n", num);

    return 0;
}
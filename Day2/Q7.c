#include <stdio.h>

int main(){
    int sum, n, remainder, result=1;
    printf("enter the number to find product of digit of the number ");
    scanf("%d", &n);

    while(n>0){
        remainder=n%10;
        result=result*remainder;
        n=n/10;
    }

    printf("the product of the digit of given number is :%d", result);


    return 0;
}
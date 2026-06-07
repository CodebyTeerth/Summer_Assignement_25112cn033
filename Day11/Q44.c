#include<stdio.h>

long int fac(int a){
    long int  fact=1;
    int i;
    if(a==0){
        return 1;
    }

    for(i=1;i<=a;i++){
        fact=fact*i;

    }
    return fact;
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d", &n);

    printf("Factorial of the given number is=%d", fac(n));

    return 0;
}
#include <stdio.h>

int main(){
    int n1, n2, i, gcd, n;

     printf("enter  first number");
    scanf("%d", &n1);

    printf("enter  second number");
    scanf("%d", &n2);

    if(n1<n2){
        n=n1;
    }
    else{
        n=n2;
    }

    for(i=2;i<=n;i++){
        if((n1%i)==0&&(n%i)==0){
            gcd=i;
        }
    }
    printf("the GCD of given number is %d", gcd);

    return 0;
}
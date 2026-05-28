#include <stdio.h>

int main(){
    int i, fac=1, n;
    printf("enter the number to calculate its factorial ");
    scanf("%d", &n);
    if(n==0){
        n=1;
    }

    for(i=1;i<=n;i++){
        fac=fac*i;
    }
    printf("the  factorial  of a given number is : %d", fac);
    return 0;
}
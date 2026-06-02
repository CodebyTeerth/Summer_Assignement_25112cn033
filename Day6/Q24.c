#include <stdio.h>

int main(){
    int n, x, i, result=1;
    printf("enter the number: ");
    scanf("%d", &x);

    printf("enter the power: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        result=result*x;
    }
    printf("output is equal to %d", result);
    return 0;
}
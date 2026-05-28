#include <stdio.h>

int main(){
    int i, sum=0, n;
    printf("enter the any natural number");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    sum=sum+i;
    }
    printf("the sum of given number is : %d", sum);
    return 0;
}
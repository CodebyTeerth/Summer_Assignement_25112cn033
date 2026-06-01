#include <stdio.h>

int main(){
    int n, i, sum=0, original;

    printf("enter the number to check perfect number");
    scanf("%d", &n);
    original=n;

    for(i=1;i<original;i++){
        if((n%i)==0){
            sum = sum + i;
        }
    }
    if(sum==original){
        printf("%d is a perfect number", original);
    }
    else{
        printf("%d is not a perfect number", original);
    }
    
    return 0;
}

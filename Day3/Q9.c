#include <stdio.h>

int main(){
    int n, i, found=0, r;

    printf("enter the number to the check prime or not");
    scanf("%d", &n);

    for(i=2;i<n;i++){
        r=n%i;
        if(r==0){
            found=1;
            break;
        
        }
    }
    if(found==1){
        printf("the given number is not prime");
    }

    else{
        printf("the given number is prime");
    }
    return 0;
}

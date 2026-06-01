#include <stdio.h>

int main(){
    int n, i;
    printf("enter the number for calculate factor");
    scanf("%d", &n);

    printf("the factor of the given number is:");
    for(i=1;i<=n;i++){
        if((n%i)==0){
            printf("%d, ", i);
        }
    }
    return 0;
}
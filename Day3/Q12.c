#include <stdio.h>

int main(){
    int n1, n2, num1, num2, i, j;

    printf("enter the first number");
    scanf("%d", &n1);
    
    printf("enter second number");
    scanf("%d", &n2);

    for(i=1;i<=n2;i++){
        for(j=1;j<=n1;j++){
            num1=n1*i;
            num2=n2*j;
            if(num1==num2){
                printf("the LCM of given number  is %d", num1);
                return 0;
            }
        }
    }
    return 0;
}
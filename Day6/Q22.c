#include <stdio.h>
#include<math.h>

int main(){
    int n, sum=0, remainder, i=0;
    printf("Enter the number binary number: ");
    scanf("%d", &n);
    while(n>0){
        remainder=n%10;
        if(remainder!=0){
        sum=sum+pow(2, i);
        }
        i++;
        n=n/10;
    }
    printf("the decimal number is: %d", sum);
    return 0;
}
#include <stdio.h>

int main(){
    int n, fac, original, i, remainder, sum=0;;
    printf("enter the number to check a given number is strong number is not");
    scanf("%d", &n);
    original=n;
         while(n>0){
            fac=1;
            remainder=n%10;
            n=n/10;
            for(i=1;i<=remainder;i++){
                if(remainder==0){
                    remainder=1;
                }
                fac=fac*i;
            }
           
            sum=sum + fac;
         }
         if(sum==original){
            printf("the given number is a strong number");
         }
         else{
            printf("the given number is not a strong number ");
         }
    return 0;
}
#include <stdio.h>

int Prime(int a) {
    for(int i=2;i<=a;i++){

    
    if((a%i)!=0)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
}

int main() {
    int  num;

    printf("Enter numbers to check prime or not: ");
    scanf("%d", &num);
    if(Prime(num)==1){
        printf("The given number is a prime number");
    }
    else{
        printf("The given number is not a prime number");
    }
   
    return 0;
}
#include <stdio.h>

int main(){
    int n=0, num;
    printf("enter the number to calculate its digit ");
    scanf("%d", &num);
    while(num>0){
        num=num/10;
        n++;
    }
    printf("the digit of given nuumber is %d", n);

    return 0;
}
#include <stdio.h>

int main(){
    int i, n, result;
    printf("enter the number to calculate table");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        result=n*i;
        printf("%d X %d = %d\n", n, i, result);
    }
    return 0;
}
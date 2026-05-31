#include <stdio.h>

int main(){
    int a=0, b=1, c, n, i;
    printf("enter the length of series");
    scanf("%d", &n);

    printf("the fibonacci series is ");
    printf("%d ", a);
    printf("%d ", b);

    for(i=1;i<n-1;i++){
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;

    }

    return 0;
}

#include <stdio.h>

int main(){
    int a=0, b=1, c, n, i, put;
    int arr[100];
    printf("enter the length of series");
    scanf("%d", &n);
    arr[0]=0;
    arr[1]=1;

    for(i=2;i<n;i++){
        c=a+b;
        arr[i]=c;
        a=b;
        b=c;
    }
    printf("enter the nth term which you want to find");
    scanf("%d", &put);

    printf("the nth term of this fibonacci series is %d", arr[put-1]);

    return 0;
}
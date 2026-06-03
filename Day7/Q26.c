#include <stdio.h>
int fac(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fac(n-1) + fac(n-2);
    }
}

int main(){
    int n;
    printf("enter the length");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("%d", fac(i));
    }

    return 0;
}
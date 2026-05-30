#include <stdio.h>

int main(){
    int n, i, r, j,  found;

    printf("enter the limit");
    scanf("%d", &n);
    
    for(i=2;i<=n;i++){
        found=0;
        for(j=2;j*j<=i;j++){
           r= i%j;
            if(r==0){
               found=1;
               break;
            }
        }
        if(found==0){
            printf("%d", i);
        }
        }

    return 0;
}
#include <stdio.h>

int main(){
    int n, i, j;
    printf("enter the height of piramid");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=n-i;j>0;j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
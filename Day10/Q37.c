#include <stdio.h>

int main(){
    int i, j, k, rows;
    printf("Enter the rows of pyramid");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++){
    for(j=rows-i;j>=0;j--){
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++){
    printf("*");
    }
        printf("\n");
    }
    return 0;
}

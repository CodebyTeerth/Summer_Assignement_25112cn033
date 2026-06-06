#include <stdio.h>

int main(){
    int i, j, k, l, rows;
    printf("Enter the rows of pyramid");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++){
    for(j=rows-i;j>=0;j--){
        printf(" ");
    }
    for(k=1;k<=i;k++){
    printf("%c", 'A'+k-1);
    }
    for(l=i-1;l>=1;l--){
        printf("%c", 'A' + l-1);
    }
        printf("\n");
    }
    return 0;
}
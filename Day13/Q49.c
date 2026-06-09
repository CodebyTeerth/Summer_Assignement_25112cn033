#include <stdio.h>

int main(){
    int n, i;
    printf("enter the size of array");
    scanf("%d", &n);
    int a[n];

    printf("enter the element of the array");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);

    }printf("The array:\n");
    for(i=0;i<n;i++){
        printf("%d \n", a[i]);
    }
    return 0;
}

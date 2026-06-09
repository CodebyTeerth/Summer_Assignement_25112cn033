#include <stdio.h>

int main(){
    int n, i, sum=0;
    printf("enter the size of array");
    scanf("%d", &n);
    int a[n];

    printf("enter the element of the array");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);

    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("The sum of the the array is %d:\n", sum);
     printf("The average of the the array is %d:\n", sum/n);
    
    return 0;
}
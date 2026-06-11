#include <stdio.h>

int main(){
     int a[100], i, n;
     printf("enter the size of array");
     scanf("%d", &n);

     printf("enter the element of array");
     for(i=0;i<n;i++){
        scanf("%d", &a[i]);
     }
     printf("the reverse of this array is:\n");
     for ( i = n-1; i >=0; i--)
     {
        printf("%d\n", a[i]);
     }
     
    return 0;
}

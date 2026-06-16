#include <stdio.h>

int main(){
    int a[100], b[100], c[100], i, j, n1, n2, n3;
    printf("Enter the size of first array:");
    scanf("%d", &n1);
     printf("Enter the element of first array");
    for(i=0;i<n1;i++){

        scanf("%d", &a[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d", &n2);
    printf("Enter the element of second array");
    for(j=0;j<n2;j++){

        scanf("%d", &b[j]);
    }
    n3=n1+n2;
    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(j=0;j<n2;j++){
        c[n1+j]=b[j];
    }
     printf("This is a new array after merging\n");
    for(i=0;i<n3;i++){

        printf("%d\n", c[i]);
    }

    return 0;
}

#include <stdio.h>

int main(){
    int a[100], n, i, j;
    printf("Enter the size of array:");
    scanf("%d", &n);

    printf("Enter the element of array:");
    for(i=0;i<n;i++){
    scanf("%d",  &a[i]);
    }
    printf("After removing Duplicate  element ");
     for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

#include <stdio.h>

int Max(int a, int b) {
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
    
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Max = %d\n", Max(num1, num2));

    return 0;
}
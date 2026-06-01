#include <stdio.h>

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    long long i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            n = n / i;
        } else {
            i++;
        }
    }
    printf("The largest prime factor is: %lld\n", n);
    
    return 0;
}
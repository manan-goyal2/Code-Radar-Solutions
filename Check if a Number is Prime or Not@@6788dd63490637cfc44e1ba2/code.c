#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);
    if (num <= 1) {
        isPrime = 0;
    } 
    else {
        // Check for divisibility from 2 to num/2
        for (i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    
    return 0;
}
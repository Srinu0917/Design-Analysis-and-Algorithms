#include <stdio.h>

int isPrime(int num, int div) {
    if (div == 1) {
        return 1;
    }
    if (num % div == 0) {
        return 0;
    }
    return isPrime(num, div - 1);
}

int main() {
    int num;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (isPrime(num, num / 2) == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

#include <stdio.h>
int Prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (Prime(number)) {
        printf("%d is a prime number.", number);
    } else {
        printf("%d is not a prime number.", number);
    }
    return 0;
}

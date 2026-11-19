#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    int n = atoi(argv[1]);
    int primeCount = 0;

    for (int i = 2; i <= n; i++) {
        int prime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            primeCount++;
        }
    }

    printf("There are %d prime numbers up to %d\n", primeCount, n);
}
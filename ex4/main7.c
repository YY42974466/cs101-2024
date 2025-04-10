#include <stdio.h>

int factorial_loop(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 5;
    printf("factorial_loop(%d) = %d\n", n, factorial_loop(n));
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    int sum_of_squares = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum_of_squares += i * i;
    }if (n>3)
    {
     printf("1^2 + 2^2 + 3^2 + ... + %d^2 = %d\n", n, sum_of_squares);
    }



    return 0;
}

#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
        {
            sum = sum-i; // Subtract if 'i' is even
        }

        else
        {
            sum = sum+i; // Add if 'i' is odd
        }
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}

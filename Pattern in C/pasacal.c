// Pascal’s Triangle in C 
// A Pascal’s Triangle is a triangular array of binomial coefficients where the nth row contains the binomial coefficients nC0, nC1, nC2, ……. nCn.
// The following example demonstrates one of the methods using which we can print Pascal’s Triangle Pattern.
#include <stdio.h>

// Function to calculate the binomial coefficient C(n, k)
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

int main() {
    int n, i, j;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            // Calculate and print the binomial coefficient
            printf("%d ", binomialCoefficient(i, j));
        }

        printf("\n");
    }

    return 0;
}

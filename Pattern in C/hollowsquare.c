// Hollow Square Pattern in C
// The Hollow Square Pattern is a square with only the boundary lines. The space inside should be empty in this pattern.
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);

    // Print the top row
    for (i = 1; i <= n; i++) {
        printf("* ");
    }
    printf("\n");

    // Print the middle rows
    for (i = 2; i <= n - 1; i++) {
        printf("* ");
        for (j = 2; j <= n - 1; j++) {
            printf("  "); // Print spaces for the inner part
        }
        printf("*\n");
    }

    // Print the bottom row
    if (n > 1) {
        for (i = 1; i <= n; i++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

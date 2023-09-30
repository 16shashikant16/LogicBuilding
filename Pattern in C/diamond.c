// The Diamond Pattern is obtained by joining the Full Pyramid and Inverted Full Pyramid Pattern by their bases. 
// We can also print this pattern using any character.
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print the top half of the diamond
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Print the bottom half of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// Printing a heart shape in C is a fun and creative programming challenge. 
// You can achieve this by using a combination of mathematical equations and loops to draw the heart shape. 
// Here's a C program to print a heart shape:c
#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    double x, y;

    for (i = 0; i <= 14; i++) {
        for (j = 0; j <= 45; j++) {
            x = pow(i - 7, 2);
            y = pow(j - 22, 2);
            if (sqrt(x + y) < 11.5 && ((x + y > 45.5 && y < 22) || (x + y > 45.5 && x < 49))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

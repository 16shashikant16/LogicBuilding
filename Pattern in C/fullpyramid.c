// C program to print the full pyramid pattern of 1
#include <stdio.h>

int main()
{
	int r = 7;

	// first loop to print all rows
	for (int i = 0; i < r; i++) {

		// inner loop 1 to print white spaces
		for (int j = 0; j < 2 * (r - i) - 1; j++) {
			printf(" ");
		}

		// inner loop 2 to print star * character
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("1 ");
		}
		printf("\n");
	}
	return 0;
}

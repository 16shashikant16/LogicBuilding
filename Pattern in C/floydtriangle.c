// Floyd’s Triangle in C In Floyd’s Triangle pattern, 
// instead of starting the sequence of the numbers from 1 in each row, 
// we print consecutive natural numbers. We can also print this pattern for alphabet sequence.
// C Program to print the Floyd's Triangle
#include <stdio.h>

int main()
{
	int rows = 4;
	int n = 1;

	// outer loop to print all rows
	for (int i = 0; i < rows; i++) {

		// innter loop to print abphabet in each row
		for (int j = 0; j <= i; j++) {
			printf("%d ", n++);
		}
		printf("\n");
	}
	return 0;
}


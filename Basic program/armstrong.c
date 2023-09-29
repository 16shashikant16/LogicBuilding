// Wap to check armstrong number
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int count = 0;

    // Count the number of digits in num
    while (num != 0) {
        num /= 10;
        count++;
    }

    num = originalNum;

    // Calculate the sum of digits raised to the power of count
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, count);
        num /= 10;
    }

    // Check if it's an Armstrong number
    return (sum == originalNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

// Two no are entered through the keyboard. Write a program to find the value of one number raised to the power of another
#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter a base:");
    scanf("%d",&a);
    printf("Enter a power:");
    scanf("%d",&b);
    int power=1;
    for (int i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("%d raised to the power %d is %d",a,b,power);
    return 0;
}
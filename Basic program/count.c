// WAP to count digits of a given number e.g n=19325 o/p:5
#include<stdio.h>
int main()

{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int count=0;
    while(n!=00)
    {
        n=n/10;
        count++;
    }
    printf("The no of digits are:%d",count);
    return 0;
}
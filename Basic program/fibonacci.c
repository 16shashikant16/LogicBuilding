// print the fibonacci of a given number 
#include<stdio.h>
int main()

{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=0;
    for (int i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The fibonacci of given number are:%d",sum);
    return 0;
}
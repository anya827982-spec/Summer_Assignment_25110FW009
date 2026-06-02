#include<stdio.h>
int main()
{
    int n,d,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        n/=10;
    }
    printf("Sum of digits=%d",sum);
    return 0;
}
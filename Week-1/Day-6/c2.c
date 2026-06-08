// Write a program to Convert binary to decimal.//
#include<stdio.h>
int main()
{
    int n,r,d=0,base=1;
    printf("Enter a Binary number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        d=d+r*base;
        n/=10;
        base*=2;
    }
    printf("Decimal number=%d",d);
    return 0;
}
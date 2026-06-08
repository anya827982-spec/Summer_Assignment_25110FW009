// Write a program to Convert decimal to binary.//
#include<stdio.h>
int main()
{
    int n,r,b=0,base=1;
    printf("Enter a Decimal number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        b=b+r*base;
        n/=2;
        base*=10;
    }
    printf("Binary number=%d",b);
    return 0;
}
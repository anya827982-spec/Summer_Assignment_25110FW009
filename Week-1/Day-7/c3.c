// Write program to Recursive sum of digits.//
#include<stdio.h>
int sumOFdigits(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits = %d",sumOFdigits(n));
    return 0;
}
int sumOFdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%10)+sumOFdigits(n/10);
}
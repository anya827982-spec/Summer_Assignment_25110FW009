// Write a program to Recursive reverse number.//
#include<stdio.h>
int reverse(int);
int rev=0;
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reverse of %d = %d",n,reverse(n));
    return 0;
}
int reverse(int n)
{
    if(n==0)
    {
        return rev;
    }
    rev=rev*10+(n%10);
    return reverse(n/10);
}
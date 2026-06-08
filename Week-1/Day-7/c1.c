// Write a program to Recursive factorial.//
#include<stdio.h>
int factorial(int);
int main()
{
    int n,fact;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d = %d",n,fact);
    return 0;
}
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
// Write a program to Recursive Fibonacci.//
#include<stdio.h>
int fibo(int);
int main()
{
    int n,i;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
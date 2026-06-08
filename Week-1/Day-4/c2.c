// Write a program to Find nth Fibonacci term.//
#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,c;
    printf("Enter N: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Nth term of Fibonacci Series=%d",a);  
    }
    else if(n==2)
    {
        printf("Nth term of Fibonacci Series=%d",b);  
    }
    else
    {
        i=1;
        while(i<=n-2)
        {
            c=a+b;
            a=b;
            b=c;
            i++;
        }
        printf("Nth term of Fibonacci Series=%d",c);
    }
    return 0;
}
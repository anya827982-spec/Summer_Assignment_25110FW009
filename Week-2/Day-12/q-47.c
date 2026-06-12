// Write a program to Write function for Fibonacci.//
#include<stdio.h>
void fibonacci(int n)
{
    int a=0,b=1,i,c;
    printf("Fibonacci Series:\n%d\n%d\n",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
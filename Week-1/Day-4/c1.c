// Write a program to Generate Fibonacci series.//
#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,c;
    printf("Enter number of tems: ");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    printf("%d\n%d\n",a,b);
    i=1;
    while(i<=n-2)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        i++;
    }
     return 0;
}   
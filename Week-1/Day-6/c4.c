// Write a program to Find x^n without pow().//
#include<stdio.h>
int main()
{
    int x,n,n1,result=1;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        result*=x;
        n--;
    }
    printf("%d^%d=%d",x,n1,result);
    return 0;
}
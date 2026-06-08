// Write a program to Check strong number.//
#include<stdio.h>
int main()
{
    int n,n1,r,fact,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%10;
        {
            fact=1;
            while(r!=0)
            {
                fact*=r;
                r--;
            }
            n/=10;
        }
        sum+=fact;
    }
    if(sum==n1)
    {
        printf("%d is a strong number.",n1);
    }
    else
    {
        printf("%d is not a strong number.",n1);
    }
    return 0;
}
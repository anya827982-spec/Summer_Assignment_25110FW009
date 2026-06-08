// Write a program to Check perfect number.//
#include<stdio.h>
int main()
{
    int n,i,p=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            p=p*i;
        }
    }
    if(p==n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("%d is not a perfect number",n);
    }
    return 0;     
}
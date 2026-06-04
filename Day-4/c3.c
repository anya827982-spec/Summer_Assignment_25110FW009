// Write a program to Check Armstrong number.//
#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,n2,sum=0,r,c=0,p,i;
    printf("Enter number: ");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    n2=n1;
    while(n1>0)
    {
        r=n1%10;
        p=1;
        for(i=1;i<=c;i++)
        {
            p=p*r;
        }
        sum=sum+p;
        n1=n1/10;
    }
    if(sum==n2)
    {
        printf("It is an Armstrong number.");
    }
    else
    {
        printf("It is not an Armstrong number.");
    }
    return 0;
}
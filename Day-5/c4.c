// Write a program to Find largest prime factor.//
#include<stdio.h>
int main()
{
    int n,i,j,count,l=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
                l=i;
            }    
        }
    }
    printf("Largest prime factor = %d",l);
    return 0;
}
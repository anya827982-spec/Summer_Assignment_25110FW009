// Write a program to Count set bits in a number.//
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2==1)
        {
            count++;
        }
        n/=2;
    }
    printf("Count of set bits=%d",count);
    return 0;
}
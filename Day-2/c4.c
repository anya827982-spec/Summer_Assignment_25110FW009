#include<stdio.h>
int main()
{
    int n,b,d,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    if(b==rev)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
    return 0;
}
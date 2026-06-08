#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The number of digits=1");
    }    
    else{
        while(n!=0)
        {
            count++;
            n/=10;
        }
        printf("The number of digits=%d",count);
    }
    return 0;
}
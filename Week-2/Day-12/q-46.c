// Write a program to Write function for Armstrong.//
#include<stdio.h>
#include<math.h>
void Armstrong(int n)
{
    int r,n1,num,i,count=0,sum=0;
    n1=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    num=n1;
    while(n1!=0)
    {
        r=n1%10;
        int p=1;
        {
            for(i=1;i<=count;i++)
            {
                p=p*r;
            }           
        }
        sum=sum+p;
        n1=n1/10;
    }
    if(sum==num){
        printf("It is an Armstrong number");
    }
    else{
        printf("It is not an Armstrong number");
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    Armstrong(n);
    return 0;
}
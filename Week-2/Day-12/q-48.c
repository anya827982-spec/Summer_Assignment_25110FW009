// Write a program to Write function for Perfect number.//
#include<stdio.h>
void Perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("It is a Perfect number");
    }
    else{
        printf("It is not a Perfect number");
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    Perfect(n);
    return 0;
}
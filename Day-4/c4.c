// Write a program to print Armstrong numbers in a range.//
#include<stdio.h>
#include<math.h>
int main()
{
    int i,num1,num2,n,n1,n2,sum,r,c,j,p;
    printf("Enter starting number: ");
    scanf("%d",&num1);
    printf("Enter ending number: ");
    scanf("%d",&num2);
    printf("Armstrong numbers: \n");
    for(i=num1;i<=num2;i++)
    {
        sum=0;
        c=0;
        n=i;
        n1=n;
        while(n!=0)
        {
            c++;
            n=n/10;
        }
        n2=n1;
        while(n1!=0)
        {
            r=n1%10;
            p=1;
            for(j=1;j<=c;j++)
            {
                p=p*r;
            }
            sum=sum+p;
            n1=n1/10;
        }
        if(sum==n2)
        {
            printf("%d\n",n2);
        }
    }
    return 0;
}
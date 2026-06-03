#include<stdio.h>
int main()
{
    int num1,num2,i,j,count;
    printf("Enter starting number: ");
    scanf("%d",&num1);
    printf("Enter Ending number: ");
    scanf("%d",&num2);
    printf("Prime numbers between %d and %d are:\n",num1,num2);
    for(i=num1;i<=num2;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        printf("%d\n",i);
    }

}
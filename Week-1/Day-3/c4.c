#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter numbers: ");
    scanf("%d%d",&a,&b);
    i=(a>b)? a:b;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
        printf("The LCM is %d",i);
        break;
        }
    }
    return 0;
}
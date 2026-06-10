// Write a program to Print character pyramid.//
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",(char)(64+j));
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%c",(char)(64+j));
        }
        printf("\n");
    }
    return 0;
}
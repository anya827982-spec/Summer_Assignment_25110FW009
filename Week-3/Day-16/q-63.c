// Write a program to Find pair with given sum.//
#include<stdio.h>
int main()
{
    int a[100],n,i,j,target;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter sum: ");
    scanf("%d",&target);
    printf("Pairs are:\n");
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target){
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }
    return 0;
}
// Write a program to Find missing number in array.//
#include<stdio.h>
int main()
{
    int n,i,total,a[100],sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    total=n*(n+1)/2;
    printf("Missing number = %d",total-sum);
    return 0;
}
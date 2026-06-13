// Write a program to Find sum and average of array.//
#include<stdio.h>
int main()
{
    int n,i,a[50],sum=0;
    float avg;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of array elements=%d\n",sum);
    avg=sum/(float)n;
    printf("Average of array elements=%.2f",avg);
    return 0;
}
// Write a program to Rotate array right.//
#include<stdio.h>
int main()
{
    int n,i,d,a[100],temp[100];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d",&d);
    d=d%n;
    for(i=0;i<d;i++)
    {
        temp[i]=a[n-d+i];
    }
    for(i=n-d-1;i>=0;i--)
    {
        a[i+d]=a[i];
    }
    for(i=0;i<d;i++)
    {
        a[i]=temp[i];
    }
    printf("Array after right rotation by %d positions:\n",d);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
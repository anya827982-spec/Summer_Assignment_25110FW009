// Write a program to Rotate array left.//
#include<stdio.h>
int main()
{
    int i,n,d,a[100],temp[100];
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
        temp[i]=a[i];
    }
    for(i=d;i<n;i++)
    {
        a[i-d]=a[i];
    }
    for(i=n-d;i<n;i++)
    {
        a[i]=temp[i-(n-d)];
    }
    printf("Array after left rotation by %d positions:\n",d);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
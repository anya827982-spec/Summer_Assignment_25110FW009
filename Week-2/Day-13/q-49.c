// Write a program to Input and display array.//
#include<stdio.h>
int main()
{
    int n,i,a[20];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
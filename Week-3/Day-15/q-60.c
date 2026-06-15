// Write a program to Move zeroes to end.//
#include<stdio.h>
int main()
{
    int n,i,j=0,temp,a[100];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    printf("Array after moving zeroes to end:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
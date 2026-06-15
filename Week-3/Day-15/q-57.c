// Write a program to Reverse array.//
#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("Reversed array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
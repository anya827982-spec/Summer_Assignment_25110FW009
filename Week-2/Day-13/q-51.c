// Write a program to Find largest and smallest element.//
#include<stdio.h>
int main()
{
    int n,i,largest,smallest,a[50];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    smallest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    printf("Largest element=%d\n",largest);
    printf("Smallest element=%d",smallest);
    return 0;
}
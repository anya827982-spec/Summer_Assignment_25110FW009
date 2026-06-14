// Write a program to Frequency of an element.//
#include<stdio.h>
int main()
{
    int a[100],n,key,i,count=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Find frequency of: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key){
            count++;
        }
    }
    printf("Frequency of %d = %d",key,count);
    return 0;
}
// Write a program to Linear search.//
#include<stdio.h>
int main()
{
    int a[100],n,key,i,pos=-1;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key){
            pos=i+1;
        }
    }
    if(pos==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at position = %d",pos);
    }
    return 0;
}
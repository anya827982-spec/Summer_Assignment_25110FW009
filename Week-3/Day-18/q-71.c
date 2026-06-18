// Write a program to Binary search.//
#include<stdio.h>
int main()
{
    int a[100],n,i,mid,beg,end,key,found=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(key==a[mid]){
            found=1;
            break;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if(found==0){
        printf("Element not found");
    }
    else{
        printf("Element found at index = %d",mid);
    }
    return 0;
}
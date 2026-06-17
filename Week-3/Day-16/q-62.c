// Write a program to Find maximum frequency element.//
#include<stdio.h>
int main()
{
    int a[100],n,i,j,freq,maxfreq=0,element;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        freq=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]){
                freq++;
            }
        }
        if(freq>maxfreq){
            maxfreq=freq;
            element=a[i];
        }
    }
    printf("Element = %d\nFrequency = %d",element,maxfreq);
    return 0;
}
// Write a program to Intersections of arrays.//
#include<stdio.h>
int main()
{
    int n1,n2,i,j,k=0,found,a[50],b[50],c[100];
    printf("Enter size of first array: ");
    scanf("%d",&n1);
    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n2);
    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Intersection elements are:\n");
    for(i=0;i<n1;i++)
    {
        found=0;
        for(k=0;k<i;k++)
        {
            if(a[i]==a[k]){
                found=1;
                break;
            }
        }
        if(found==0){
            for(j=0;j<n2;j++)
            {
                if(a[i]==b[j]){
                    printf("%d ",a[i]);
                    break;
                }
            }
        }
    }
    return 0;
}
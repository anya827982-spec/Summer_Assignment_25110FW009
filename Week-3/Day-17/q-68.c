// Write a program to Find common elements.//
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
    printf("Common elements:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j]){
                printf("%d ",a[i]);
                b[j]=-1;
                break;
            }
        }
    }
    return 0;
}
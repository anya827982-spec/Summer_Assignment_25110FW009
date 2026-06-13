// Write a program to Count even and odd elements.//
#include<stdio.h>
int main()
{
    int n,i,a[50],even=0,odd=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Number of even elements=%d\n",even);
    printf("Number of odd elements=%d\n",odd);
    return 0;
}
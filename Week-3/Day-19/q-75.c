// Write a program to find Transpose matrix.//
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],r,col,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&col);
    printf("Enter elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose of matrix:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
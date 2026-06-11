// Write a program to Write function to find sum of two numbers.//
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    printf("Sum = %d",sum(a,b));
    return 0;
}
// Write a program to Write function for palindrome.//
#include<stdio.h>
void palindrome(int n)
{
    int num,r,rev=0;
    num=n;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n/=10;
    }
    if(rev==num){
        printf("It is a Palindrome number");
    }
    else{
        printf("It is not a Palindrome number");
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}
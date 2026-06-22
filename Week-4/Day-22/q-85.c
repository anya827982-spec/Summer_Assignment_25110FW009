// Write a program to Check palindrome string.//
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,length,flag=1;
    printf("Enter string:\n");
    gets(str);
    length=strlen(str);
    for(i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-1-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("string is not palindrome");
    }
    else{
        printf("string is palindrome");
    }
    return 0;
}
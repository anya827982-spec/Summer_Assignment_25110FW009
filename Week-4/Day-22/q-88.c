// Write a program to Remove spaces from a string.//
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j=0;
    printf("Enter string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("String without spaces:\n%s",str);
    return 0;
}
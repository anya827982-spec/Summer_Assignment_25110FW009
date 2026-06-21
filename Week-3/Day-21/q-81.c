// Write a program to Find string length without strlen().//
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,length=0;
    printf("Enter string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("Length of string = %d",length);
    return 0;
}
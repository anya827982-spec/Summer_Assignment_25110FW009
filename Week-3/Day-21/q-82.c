// Write a program to Reverse a string.//
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,j,temp,length=0;
    printf("Enter string:\n");
    gets(str);
    length=strlen(str);
    i=0;
    j=length-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    puts(str);
    return 0;
}
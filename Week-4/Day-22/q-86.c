// Write a program to Count words in a sentence.//
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,words=1;
    printf("Enter string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
            words++;
        }
    }
    printf("Number of words = %d",words);
    return 0;
}
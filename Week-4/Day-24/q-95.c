// Write a program to Find longest word.//
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i, len = 0, maxLen = 0;
    char longest[100], temp[100];
    printf("Enter string: ");
    gets(str);
    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            temp[len++] = str[i];
        }
        else
        {
            temp[len] = '\0';
            if(len > maxLen)
            {
                maxLen = len;
                strcpy(longest, temp);
            }
            len = 0;
            if(str[i] == '\0')
                break;
        }
    }
    printf("Longest word: %s", longest);
    return 0;
}
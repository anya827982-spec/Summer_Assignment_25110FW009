// Write a program to find maximum occurring character.//
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,count,max=0;
    char maxchar;
    printf("Enter string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            maxchar=str[i];
        }
    }
    printf("Maximum occurring character = %c\n",maxchar);
    printf("Frequency = %d",max);
    return 0;
}
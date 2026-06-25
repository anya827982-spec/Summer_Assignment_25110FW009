// Write a program to Check string rotation.//
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], temp[200];
    printf("Enter first string:\n");
    gets(str1);
    printf("Enter second string:\n");
    gets(str2);
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strlen(str1) == strlen(str2) && strstr(temp, str2)){
        printf("Strings are rotations of each other");
    }
    else{
        printf("Strings are not rotations of each other");
    }
    return 0;
}
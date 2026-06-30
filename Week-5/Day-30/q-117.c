// Write a program to create student record system using arrays and strings.//
#include <stdio.h>
int main()
{
    int roll[100],marks[100],n,i,choice,search;
    char name[100][50];
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Enter Roll No: ");
        scanf("%d",&roll[i]);
        printf("Enter Name: ");
        scanf(" %s",name[i]);
        printf("Enter Marks: ");
        scanf("%d",&marks[i]);
    }

    do
    {
        printf("\n===== STUDENT RECORD MENU =====\n");
        printf("1. Display Records\n");
        printf("2. Search Student\n");
        printf("3. Update Marks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nRoll No.\tName\tMarks\n");
                for(i=0;i<n;i++)
                {
                    printf(" %d\t\t%s\t%d\n",roll[i],name[i],marks[i]);
                }
                break;

            case 2:
                printf("Enter Roll No to search: ");
                scanf("%d",&search);
                for(i=0;i<n;i++)
                {
                    if(roll[i]==search)
                    {
                        printf("\nStudent Found!\n");
                        printf("Name = %s\n",name[i]);
                        printf("Marks = %d\n",marks[i]);
                        break;
                    }
                }
                if(i==n){
                    printf("Student Not Found!\n");
                }
                break;

            case 3:
                printf("Enter Roll No: ");
                scanf("%d",&search);
                for(i=0;i<n;i++)
                {
                    if(roll[i]==search)
                    {
                        printf("Enter New Marks: ");
                        scanf("%d",&marks[i]);
                        printf("Marks Updated Successfully!\n");
                        break;
                    }
                }
                if(i==n){
                    printf("Student Not Found!\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } while(choice!=4);

    return 0;
}
// Write a program to Develop complete mini project using arrays,strings and functions.//
#include <stdio.h>
int roll[100],marks[100],n;
char name[100][50];
void addStudents()
{
    int i;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Enter Roll No: ");
        scanf("%d",&roll[i]);
        printf("Enter Name: ");
        scanf("%s",name[i]);
        printf("Enter Marks: ");
        scanf("%d",&marks[i]);
    }
}

void displayStudents()
{
    int i;
    printf("\nRoll No\tName\tMarks\n");
    for(i=0;i<n;i++)
    {
        printf(" %d\t%s\t%d\n",roll[i],name[i],marks[i]);
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice!=3);

    return 0;
}
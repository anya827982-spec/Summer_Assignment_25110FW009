// Write a program to Create contact management system.//
#include<stdio.h>
int main()
{
    int choice;
    char name[50];
    char phone[15];
    do
    {
        printf("\n==== CONTACT MANAGEMENT SYSTEM ====\n");
        printf("1. Add Contact\n");
        printf("2. View Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:{
                printf("Enter Contact Name: ");
                scanf(" %[^\n]",name);
                printf("Enter Phone Number: ");
                scanf("%s",&phone);
                printf("Contact Added Successfully!\n");
                break;
            }
            case 2:{
                printf("\nSaved Contact\n");
                printf("Name : %s\n",name);
                printf("Phone : %s\n",phone);
                break;
            }
            case 3:{
                name[0]='\0';
                phone[0]='\0';
                printf("Contact Deleted Successfully!\n");
                break;
            }
            case 4:{
                printf("Thank You!\n");
                return 0;
            }
            default:{
                printf("Invalid Choice!\n");
            }
        }
    } while (choice!=4);
    return 0;
}
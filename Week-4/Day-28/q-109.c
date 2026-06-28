// Write a program to Create library management system.//
#include<stdio.h>
int main()
{
    int choice;
    char book[50];
    int id;
    do
    {
        printf("\n==== LIBRARY MANAGEMENT SYSTEM ====\n");
        printf("1. Add Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:{
                printf("Enter Book ID: ");
                scanf("%d",&id);
                printf("Enter Book Name: ");
                scanf(" %[^\n]",book);
                printf("Book Added Successfully!\n");
                break;
            }
            case 2:{
                printf("Enter Book ID to Issue: ");
                scanf("%d",&id);
                printf("Book Issued Successfully!\n");
                break;
            }
            case 3:{
                printf("Enter Book ID to Return: ");
                scanf("%d",&id);
                printf("Book Returned Successfully!\n");
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
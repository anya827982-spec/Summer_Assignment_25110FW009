// Write a program to Create ticket booking system.//
#include<stdio.h>
int main()
{
    int choice;
    int ticket=10;
    int book,cancel;
    do
    {
       printf("\n==== TICKET BOOKING SYSTEM ====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Available Tickets\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:{
                printf("Enter number of tickets to book: ");
                scanf("%d",&book);
                if(book<=ticket)
                {
                    ticket-=book;
                    printf("Ticket Booked Successfully!\n");
                }
                else{
                    printf("Tickets Not Available!\n");
                }
                break;
            }
            case 2:{
                printf("Enter number of tickets to cancel: ");
                scanf("%d",&cancel);
                ticket+=cancel;
                printf("Ticket Cancelled Successfully!\n");
                break;
            }
            case 3:{
                printf("Available Tickets = %d\n",ticket);
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
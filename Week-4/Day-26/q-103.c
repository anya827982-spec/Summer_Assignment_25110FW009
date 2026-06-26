// Write a program to Create ATM simulation.//
#include<stdio.h>
int main()
{
    int choice;
    float balance=50000,amount;
    do
    {
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Current Balance:%.2f\n",balance);
                break;
            }
            case 2:
            {
                printf("Enter amount to deposit: ");
                scanf("%f",&amount);
                balance+=amount;
                printf("Deposit successful.\n");
                break;
            }
            case 3:
            {
                printf("Enter amount to withdraw: ");
                scanf("%f",&amount);
                if(amount<=balance)
                {
                    balance-=amount;
                    printf("Withdraw successful.\n");
                }
                else{
                    printf("Insufficient balance.\n");
                }
                break;
            }
            case 4:
            {
                printf("Thank you!\n");
                break;
            }
            default:{
                printf("Invalid choice.\n");
            }
        }
    } while (choice!=4);
    return 0;
}
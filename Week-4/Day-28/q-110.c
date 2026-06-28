// Write a program to Create bank account system.//
#include<stdio.h>
int main()
{
    int choice;
    int accNo;
    char name[50];
    float balance=0,amount;
    do
    {
       printf("\n==== BANK ACCOUNT SYSTEM ====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:{
                printf("Enter Account Number: ");
                scanf("%d",&accNo);
                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]",name);
                printf("Enter Initial Balance: ");
                scanf("%f",&balance);
                printf("Account Created Successfully!\n");
                break;
            }
            case 2:{
                printf("Enter Amount to Deposit: ");
                scanf("%f",&amount);
                balance = balance + amount;
                printf("Money Deposit Successfully!\n");
                break;
            }
            case 3:{
                printf("Enter Amount to Withdraw: ");
                scanf("%f",&amount);
                if(amount<=balance){
                    balance = balance - amount;
                    printf("Money Withdraw Successfully!\n");
                }
                else{
                    printf("Insufficient Balance!\n");
                }
                break;
            }
            case 4:{
                printf("Current Balance = %.2f\n",balance);
                break;
            }
            case 5:{
                printf("Thank You!\n");
                return 0;
            }
            default:{
                printf("Invalid Choice!\n");
            }
        }
    } while (choice!=5);
    return 0;
}
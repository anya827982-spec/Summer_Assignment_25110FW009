// Write a program to create inventory management system.//
#include <stdio.h>

int main()
{
    int id[100],quantity[100];
    int n,i,choice,searchId;
    printf("Enter number of products: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Product ID: ");
        scanf("%d",&id[i]);
        printf("Enter Quantity: ");
        scanf("%d",&quantity[i]);
    }

    do
    {
        printf("\n===== INVENTORY MENU =====\n");
        printf("1. Display Products\n");
        printf("2. Search Product\n");
        printf("3. Update Quantity\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nProduct ID\tQuantity\n");
                for(i=0;i<n;i++)
                {
                    printf("%d\t\t%d\n",id[i],quantity[i]);
                }
                break;

            case 2:
                printf("Enter Product ID to search: ");
                scanf("%d",&searchId);
                for(i=0;i<n;i++)
                {
                    if(id[i]==searchId)
                    {
                        printf("Product Found!\n");
                        printf("Quantity = %d\n",quantity[i]);
                        break;
                    }
                }
                if(i==n){
                    printf("Product Not Found!\n");
                }
                    break;

            case 3:
                printf("Enter Product ID: ");
                scanf("%d",&searchId);
                for(i=0;i<n;i++)
                {
                    if(id[i]==searchId)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d",&quantity[i]);
                        printf("Quantity Updated Successfully!\n");
                        break;
                    }
                }
                if(i==n){
                    printf("Product Not Found!\n");
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
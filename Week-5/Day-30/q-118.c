// Write a program to create mini library system.//
#include <stdio.h>
int main()
{
    int bookId[100],n,i,choice,search;
    char bookName[100][50];
    printf("Enter number of books: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nBook %d\n",i+1);
        printf("Enter Book ID: ");
        scanf("%d",&bookId[i]);
        printf("Enter Book Name: ");
        scanf(" %[^\n]",bookName[i]);
    }
    do
    {
        printf("\n===== LIBRARY MENU =====\n");
        printf("1. Display Books\n");
        printf("2. Search Book\n");
        printf("3. Add New Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nBook ID\tBook Name\n");
                for(i=0;i<n;i++)
                {
                    printf("%d\t%s\n",bookId[i],bookName[i]);
                }
                break;

            case 2:
                printf("Enter Book ID to search: ");
                scanf("%d",&search);
                for(i=0;i<n;i++)
                {
                    if(bookId[i]==search)
                    {
                        printf("Book Found: %s\n",bookName[i]);
                        break;
                    }
                }
                if(i==n){
                    printf("Book Not Found!\n");
                }
                break;

            case 3:
                printf("Enter New Book ID: ");
                scanf("%d",&bookId[n]);
                printf("Enter Book Name: ");
                scanf(" %[^\n]",bookName[n]);
                n++;
                printf("Book Added Successfully!\n");
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
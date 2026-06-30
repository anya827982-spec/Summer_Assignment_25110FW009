// Write a program to Create mini employee management system.//
#include <stdio.h>
int main()
{
    int id[100],salary[100],n,i,choice,search;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Enter Employee ID: ");
        scanf("%d",&id[i]);
        printf("Enter Salary: ");
        scanf("%d",&salary[i]);
    }

    do
    {
        printf("\n===== EMPLOYEE MENU =====\n");
        printf("1. Display Employees\n");
        printf("2. Search Employee\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nID\tSalary\n");
                for(i=0;i<n;i++)
                printf("%d\t%d\n",id[i],salary[i]);
                break;

            case 2:
                printf("Enter Employee ID: ");
                scanf("%d",&search);
                for(i=0;i<n;i++)
                {
                    if(id[i]==search)
                    {
                        printf("Salary = %d\n",salary[i]);
                        break;
                    }
                }
                if(i==n){
                    printf("Employee Not Found!\n");
                }
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d",&search);
                for(i=0;i<n;i++)
                {
                    if(id[i]==search)
                    {
                        printf("Enter New Salary: ");
                        scanf("%d",&salary[i]);
                        printf("Salary Updated Successfully!\n");
                        break;
                    }
                }
                if(i==n){
                    printf("Employee Not Found!\n");
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
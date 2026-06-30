// Write a program to create menu driven array operations system.//
#include<stdio.h>
int main()
{
    int arr[100],n,i,choice,value,pos;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    do
    {
        printf("\n===== ARRAY MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Search Element\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:{
                printf("Array Elements: ");
                for(i=0;i<n;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
            }
            case 2:{
                printf("Enter element to search: ");
                scanf("%d",&value);
                pos=-1;
                for(i=0;i<n;i++)
                {
                    if(arr[i]==value){
                        pos=i;
                        break;
                    }
                }
                if(pos!=-1)
                {
                    printf("Element found at index %d\n",pos);
                }
                else{
                    printf("Element not found\n");
                }
                break;
                case 3:{
                    value=arr[0];
                    for(i=1;i<n;i++)
                    {
                        if(arr[i]>value)
                        {
                            value=arr[i];
                        }
                    }
                    printf("Maximum = %d\n",value);
                    break;
                }
                case 4:{
                    value=arr[0];
                    for(i=1;i<n;i++)
                    {
                        if(arr[i]<value)
                        {
                            value=arr[i];
                        }
                    }
                    printf("Minimum = %d\n",value);
                    break;
                }
                case 5:{
                    printf("Thank You!\n");
                    break;
                }
                default:
                printf("Invalid Choice!\n");
            }
        }
    } while (choice!=5);
    return 0;
}
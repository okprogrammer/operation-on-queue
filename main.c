#include <stdio.h>
#include <stdlib.h>
/* Creating a structure of two fields data and next pointer of type struct node which is indicating the node*/
struct node
{
    int data;
    struct node* next;
};
struct node* front;
struct node* rear;
/*Adding element in the queue*/
void Enqueue(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    struct node* temp2=front;
    temp->data=x;
    if(front==NULL)
    {
        temp->next=front;
        front=temp;
        rear=temp;
        return;
    }
    temp2=rear;
    temp2->next=temp;
    rear=temp;
    temp->next=NULL;x
}
/*Deleting element from the queue*/
void Dequeue()
{
    if(front==NULL)
    {
        printf("The Queue is empty!\n");
        return;
    }
    struct node* temp2=front;
    front=temp2->next;
    free(temp2);
}
/* To display the data of queue*/
void Display()
{
    if(front==NULL)
     printf("The Queue is empty!\n");
    else
    {
        struct node* temp=front;
        printf("The Queue element!\n");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
            printf("\n");
        }
    }
}
int main()
{
    struct node* rear=NULL;
    struct node* front=NULL;
    int x,i,n,choice;
    /* in this while loop is always true*/
    /*By using this we can perform various operation at a time*/
    while(1)
    {
        printf("1. Insert an element in the Queue!\n");
        printf("2. Delete an element from Queue:\n");
        printf("3.Display Queue!\n");
        printf("4. Exit\n");
        printf("Enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                printf("Enter the no. of element for queue:\n");
                scanf("%d",&n);
                printf("enter the element\n");
                for(i=0;i<n;i++)
                {
                    scanf("%d",&x);
                    Enqueue(x);
                }
                break;
            }
        case 2:
            {
                Dequeue();
                break;
            }
        case 3:
            {
                Display();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            default:
                {
                    printf("wrong choice entered\n");
                    break;
                }
        }
    }
    return 0;
}

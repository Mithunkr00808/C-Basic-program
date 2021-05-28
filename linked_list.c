#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
} *head, *var, *temp;
int size;

void ins_beg()
{
    int ele;
    system("cls");
    printf("Enter the value for inserting:");
    scanf("%d", &ele);
    if(head == NULL)
    {
        head = (struct node *) malloc(size);
        head -> data = ele;
        head -> next = NULL;
        printf("First element Sucessfully Inserted!\nLoc:%u", head);
    }
    else
    {
        temp = head;
        var = (struct node *) malloc(size);
        var -> data = ele;
        var -> next = head;
        head = var;
        printf("Element sucessfully inserted!\nLoc:%u", head);
    }
    getch();
}

void ins_end()
{
    int ele;
    system("cls");
    printf("Enter the element:");
    scanf("%d", &ele);
    temp = head;
    if(temp == NULL)
    {
        temp = malloc(size);
        temp -> data = ele;
        temp -> next = NULL;
        head = temp;
        printf("First element Sucessfully insterted!\nPos:%u", temp);
    }
    else
    {
        while(temp -> next != NULL)
            temp = temp -> next;
        var = malloc(size);
        var -> data = ele;
        var -> next = NULL;
        temp -> next = var;
        printf("Element Sucessfully insterted!\nPos:%u", var);
    }
    getch();
}

void del_beg()
{
    system("cls");
    temp = head;
    head = head -> next;
    printf("Now deleting \nElement:%d\nAt:%u", temp->data, temp);
    free(temp);
    getch();
}

void del_end()
{
    system("cls");
    temp = head;
    if(temp == NULL)
        printf("No elements in the list!");
    else
    {
        while(temp -> next != NULL)
        {
            var = temp;
            temp = temp -> next;
        }
        printf("temp: %d var: %d", temp->data, var->data);
        var -> next = NULL;
        free(temp);
    }
    getch();
}

void print_list()
{
    system("cls");
    temp = head;
    if(temp == NULL)
        printf("No elements in the list!");
    else
    {
        printf("Elements in the list are:\n");
        while(temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp -> next;
        }
    }
    getch();
}

void main()
{
    int ch;
    head = NULL;
    size = sizeof(struct node);
    while(1)
    {
        system("cls");
        printf("Enter your choice:\n=======================");
        printf("\n1.InseRt at Begining\n2.Insert at end\n3.Delete at Begining\n4.DElete at end\n5.Print\n6.Exit\n\n");
        printf("\nYour choice:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: ins_beg();
                    break;
            case 2: ins_end();
                    break;
            case 3: del_beg();
                    break;
            case 4: del_end();
                    break;
            case 5: print_list();
                    break;
            default:exit(0);
        }
    }
}

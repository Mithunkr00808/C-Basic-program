#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 3
int q[MAX];
int r=-1,f=0;

void insert()
{
    int ele;
    system("cls");
    if(r==(MAX-1))
    printf("Overflow!\n");
    else
    {
        printf("Enter the element to Push:");
        scanf("%d", &ele);
        q[++r]=ele;
    }
}
void del()
{
    system("cls");
    if(r==-1)
    printf("Underflow!\n");
    else
    {
        printf("Element removed is %d", q[f]);
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        f++;
    }
}

void display()
{
    int i;
    system("cls");
    if(r==-1)
        printf("empty, no elemnts\n");
    else
    {
        printf("Elements in the queue are:\n");
        for(i=f;i<=r;i++)
            printf("%d\t", q[i]);
    }
    getch();
}
void main()
{
    int ch;
    while(1)
    {
        system("cls");
        printf("Queue operatons\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice:\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert();
                break;
            case 2: del();
                break;
            case 3: display();
                break;
            default: exit(0);
        }
    }
    getch();
}

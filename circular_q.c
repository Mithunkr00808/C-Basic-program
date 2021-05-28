#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5

//DeclaRation of Global Variables
int a[5], front=-1, rear=-1;

//Inserting a new element tO the queue
void enqueue()
{
    int ele;
    system("cls");
    //ChecK if Queue is full
    if((rear+1)%max == front)
    {
        printf("Queue overflow!");
        getch();
        return;
    }
    printf("Enter the element you want to enqueue:");
    scanf("%d", &ele);
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        a[rear] = ele;
    }
    else
    {
        rear = (rear+1) % max;
        a[rear] = ele;
    }
}

//REmove elements from the Queue
void dequeue()
{
    int i;
    system("cls");
    //Check if Queue is Empty
    if(front == -1)
    {
        printf("Queue empty!");
        getch();
    }
    else if(front == rear)
    {
        front--;
        rear--;
    }
    else
        front = (front+1) % max;
}

//PRint the elements in the Queue
void print_q()
{
    int i=front;
    system("cls");
    //Check if Queue is Empty
    if(front == -1)
        printf("Queue is empty!");
    else
    {
        printf("Elements in the queue are:\n");
        while(i != rear)
        {
            printf("%d\t", a[i]);
            i = (i+1) % max;
        }
        //Print the Last Element
        printf("%d", a[rear]);
    }
    getch();
}

int main()
{
    int ch;
    while(1)
    {
        system("cls");
        printf("Front:%d\nRear:%d\n\n", front, rear);
        printf("Enter your choice:\n====================\n1.Enqueue\n2.Dequeue\n3.Print\n4.Exit\n\nYour Choice:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: print_q();
                    break;
            default:exit(0);
        }
    }
    return 0;
}

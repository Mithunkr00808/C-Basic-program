#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5

int a[max], top=-1;

void push()
{
    int ele;
    system("cls");
    if(top == max-1)
    {
        printf("Stack Overflow!");
        getch();
        return;
    }
    else
    {
        printf("Enter the element:");
        scanf("%d", &ele);
        a[++top] = ele;
    }
}

void pop()
{
    system("cls");
    if(top == -1)
    {
        printf("Stack Epmty!");
        getch();
        return;
    }
    printf("Element being deleted:%d", a[top--]);
    getch();
}

void disp()
{
    int i;
    system("cls");
    printf("Elements in the stack are:\n");
    for(i=0;i<=top;i++)
        printf("%d\t", a[i]);
    getch();
}

int main()
{
    int ch;
    while(1)
    {
        system("cls");
        printf("Enter your choice:\n=====================\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: disp();
                    break;
            default: exit(0);
        }
    }
    return 0;
}
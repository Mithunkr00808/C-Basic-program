#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void insert(int a[], int *n)
{
    int ele, p, i;
    system("cls");
    if(*n >= 100)
    {
        printf("Max elements inserted!\n");
        getch();
        return;
    }
    printf("Enter the element to insert:");
    scanf("%d", &ele);
    if(*n == 0)
    {
        a[0] = ele;
        *n = 1;
        return;
    }
    printf("Enter the position:");
    scanf("%d", &p);
    if(p > 100 || p <= 0)
    {
        printf("Impossible to insert at that position!");
        getch();
        return;
    }
    if(p > *n+1)
    {
        printf("Position value too high. Will insert at the end!");
        p = *n + 1;
        getch();
    }
    *n += 1;
    for(i=*n ; i>=p ; i--)
        a[i] = a[i-1];
    a[p-1] = ele;
    return;
}

void delete(int a[], int *n)
{
    int i, p;
    system("cls");
    printf("Enter the position to delete (0 = Delete All):");
    scanf("%d", &p);
    if(p == 0)
    {
        for(i=0;i<*n;i++)
            a[i] = 0;
        *n = 0;
        return;
    }
    if(p > *n)
    {
        printf("No element yet at %d!", p);
        getch();
        return;
    }
    if(p < 0)
    {
        printf("Invalid position!");
        getch();
        return;
    }
    for(i=p-1;i<*n;i++)
        a[i] = a[i+1];
    *n -= 1;
}

void print_arr(int a[], int *n)
{
    int i;
    system("cls");
    printf("The Array is:\n");
    for(i=0 ; i<*n ; i++)
        printf("%d\n", a[i]);
    printf("\n");
    getch();
}

void main()
{
    int a[100], n=0, ch, i;
    system("cls");
    // for(i=0;i<100;i++)
    //     a[i] = i+1;
    // n=100;
    while(1)
    {
        system("cls");
        printf("Current number of elements:%d\n", n);
        printf("\n\nEnter your choice\n=================\n1.Insert\n2.Delete\n3.Print\n4.Exit");
        printf("\n\nEnter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert(a, &n);
                    break;
            case 2: delete(a, &n);
                    break;
            case 3: print_arr(a, &n);
                    break;
            default:exit(0);
        }
    }
}

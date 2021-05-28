#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void linear(int a[], int n)
{
    int key, i;
    printf("Enter the key:");
    scanf("%d", &key);
    for(i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d", i+1);
            return;
        }
    }
    printf("Element not Found!");
}

void bin(int a[], int n)
{
    int key, left=0, right=n-1, mid;
    printf("Enter the search element:");
    scanf("%d", &key);
    while(left <= right)
    {
        mid = left + (right-left) / 2;
        if(a[mid] == key)
        {
            printf("Element found at:%d", mid+1);
            return;
        }
        else
        {
            if(a[mid] < key)
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    printf("Element not found!");
}

int main()
{
    int a[100], i, ch, n;
    // system("cls");
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for(i=0 ; i<n ; i++)
        scanf("%d", &a[i]);
    printf("\n\n1.Linear Search\n2.Binary Search\nEnter your choice:");
    scanf("%d", &ch);
    if(ch == 1)
        linear(a, n);
    if(ch == 2)
        bin(a, n);
    return 0;
}

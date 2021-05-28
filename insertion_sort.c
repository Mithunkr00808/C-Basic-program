#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a[100], n, i, j, key;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for(i=0 ; i<n ; i++)
        scanf("%d", &a[i]);
    printf("\n\nArray before sort:\n");
    for(i=0 ; i<n ; i++)
        printf("%d\t", a[i]);
    printf("\n\nArray after sort:\n");
    for(i=1 ; i<n ; i++)
    {
        key = a[i];
        for(j=i-1; j >= 0 && a[j] > key; j--)
            a[j+1] = a[j];
        a[j+1] = key;
    }
    for(i=0 ; i<n ; i++)
        printf("%d\t", a[i]);
    return 0;
}

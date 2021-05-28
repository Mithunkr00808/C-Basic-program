#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[20], b[20], c[40];
    int i=0,j=0,k=0,n,m;
    srand(time(NULL));
    n = rand() % 20;
    m = rand() % 20;
    system("cls"); 
    for(i=0;i<n;i++)
        a[i] = rand();
    for(i=0;i<m;i++)
        b[i] = rand();
    printf("1st array Numbers are (%d):\n", n);
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\n2nd array Numbers are (%d):\n", m);
    for(i=0;i<m;i++)
        printf("%d\t", b[i]);
    i=0;
    while((i<n) && (j<m))
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while(i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while(j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("\nResult(%d):\n", k);
    for(i=0;i<k;i++)
        printf("%d\t", c[i]);
}

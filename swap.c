#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void swap_val(int a, int b)
{
    a += b;
    b = a-b;
    a -= b;
    printf("\nSwaped numbers(val):\na:%d\nb:%d\n", a, b);
}

void swap_ref(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("Numbers Before swap:\na:%d\nb:%d", a, b);
    swap_val(a, b);
    swap_ref(&a, &b);
    printf("Swapped numbers(ref):\na:%d\nb:%d\n", a, b);
    return 0;
}

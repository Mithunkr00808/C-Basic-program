#include<stdlib.h>
#include<stdio.h>

int bintodec(int n)
{
    if(n == 0)
        return 0;
    return n%10 + 2*bintodec(n/10);
}

int main()
{
    int bin;
    printf("Enter the number:");
    scanf("%d", &bin);
    printf("Decimal:%d", bintodec(bin));
}

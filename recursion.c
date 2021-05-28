#include<stdio.h>
#include<stdlib.h>

int gcd(int n1, int n2)
{
    if(n2 == 0)
        return n1;
    return gcd(n2, n1%n2);
}

int toh(int n, char a, char b, char c)
{
    if(n > 0)
    {
        toh(n-1, a, c, b);
        printf("Move %c to %c\n\n", a, c);
        toh(n-1, b, a, c);
    }
}

int sum(int n)
{
    if(n == 1)
     return 1;
    return n + sum(n-1);
}

int main()
{
    int n1, n2, ch, res;
    printf("1.GCD\n2.TOH\n3.Sum\nChoice:");
    scanf("%d", &ch);
    if(ch == 1)
    {
        printf("Enter the numbers:");
        scanf("%d%d", &n1, &n2);
        res = gcd(n1, n2);
        printf("GCD:%d\tLCM:%d", res, (n1*n2)/res);
    }
    if(ch == 2)
    {
        printf("Enter the number:");
        scanf("%d", &n1);
        toh(n1, 'A', 'B', 'C');
    }
    if(ch == 3)
    {
        printf("Enter the number:");
        scanf("%d", &n1);
        printf("Result:%d", sum(n1));
    }
    return 0;
}

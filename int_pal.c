#include<stdio.h>

void main()
{
    int a, b = 0, r, t;
    printf("Enter the number:");
    scanf("%d", &a);
    t = a;
    while(t > 0)
    {
        r = t % 10;
        b = b * 10 + r;
        t /= 10;
    }
    printf("Reverse: %d\n", b);
    if(a == b)
        printf("It's a palindrome!");
    else
        printf("It's not palindrome!");
}

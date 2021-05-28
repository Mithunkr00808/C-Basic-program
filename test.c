#include<stdio.h>

int main()
{
    int i=2147483647;
    printf("%lu\n\n", sizeof("int"));
    printf("%d\n", i);
    i++;
    printf("%d\n", i);
    return 0;
}

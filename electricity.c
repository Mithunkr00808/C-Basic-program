//Program to compute electricity bill//
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    char name[40];
    int units, amt;
    printf("Enter the name of the Owner:");
    gets(name);
    printf("Enter the number of units consumed:");
    scanf("%d", &units);
    if(units < 200)
    {
        amt = units * 80;
    }
    else if(units < 300)
    {
        amt = 200 * 80;
        amt += (units-200) * 90;
    }
    else
    {
        amt = 200 * 80;
        amt += 100 * 90;
        amt += (units-300) * 100;
    }
    amt /= 100;
    amt += 100;
    if(amt > 400)
        amt += amt * 0.15;
    printf("Amount payable by %s for %d units is Rs.%d\n\n", name, units, amt);
    return 1;
}

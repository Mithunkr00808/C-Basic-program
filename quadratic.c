#include<stdio.h>
#include<math.h>

void main()
{
    double a, b, c, r1, r2, d;
    printf("Enter the coffs:");
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("%lf\t", a);
    printf("%lf\t", b);
    printf("%lf\t", c);
    d = b * b - 4 * a * c;
    printf("\n%lf", d);
    if(d > 0)
    {
        printf("\n\nRoots are Real and different!\n");
        r1 = ((-1 * b) + sqrt(d)) / (2*a);
        r2 = ((-1 * b) - sqrt(d)) / (2*a);
        printf("Roots are %.2lf and %.2lf", r1,r2);
    }
    else if(d == 0)
    {
        printf("Roots are real and equal!");
        r1 = -b / (2*a);
        printf("Root:%.2lf", r1);
    }
    else
    {
        printf("Roots are not real!");
    }
}

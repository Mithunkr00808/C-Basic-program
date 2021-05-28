#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a[50], n, i, sum=0, mean, sd=0;
    system("cls");
    printf("Enter the number of values:");
    scanf("%d", &n);
    printf("Enter %d values:", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("For the numbers:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
        sum += a[i];
    }
    mean = sum / n;
    for(i=0; i<n; i++)
        sd += (a[i] - mean) * (a[i] - mean);
    sd = sqrt(sd/n);
    printf("\nSum:%d\nMean:%d\nSD:%d", sum, mean, sd);
    return 0;
}

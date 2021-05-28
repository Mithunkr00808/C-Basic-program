#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[5][5], b[5][5], mul[5][5];
    int i, j, k, r1, c1, r2, c2;
    system("cls");

    //Take input of Order of matrices
    printf("Enter the order of matrix 1:");
    scanf("%d%d", &r1, &c1);
    printf("Enter the order of matrix 2:");
    scanf("%d%d", &r2, &c2);
    
    //Check for multiplicablity
    if(c1 != r2)
    {
        printf("Matrix multiplication not possible!");
        return;
    }

    //Input Matrices
    printf("Enter the elements of the matrix 1:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the elements of the matrix 2:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    //Print the matrices
    printf("A matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("B matrix is:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }
    
    //Multiply the Matrices
    for(i=0;i<c1;i++)   
        for(j=0;j<r2;j++)    
        {    
            mul[i][j] = 0;    
            for(k=0;k<r2;k++)
                mul[i][j] += a[i][k]*b[k][j];    
        }
    
    //Print the Multiplied Matrices
    printf("Multiplied matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d\t", mul[i][j]);
        printf("\n");
    }
}

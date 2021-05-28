#include<stdio.h>
#include<conio.h>

void main(int argc, char* argv[])
{
    int i;
    printf("Number of  arguments passed:%d\n\n", argc-1);
    if(argc > 1)
    {
        printf("Arguements are:\n");
        for(i=1 ; i<argc ; i++)
            printf("\narg %d: %s", i, argv[i]);
    }
}

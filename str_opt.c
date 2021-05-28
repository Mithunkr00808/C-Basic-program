#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void compare(char a[], char b[])
{
    char *p1=a, *p2=b;
    short int flag=1;
    system("cls");
    while(*p1 != '\0' && *p2 != '\0')
    {
        if(*p1 != *p2)
        {
            flag = 0;
            break;
        }
        p1++;
        p2++;
    }
    if (*p1 == *p2 && flag==1)
        printf("Entered strings are Equal!\n");
    else
        printf("Entered strings are not equal!\n");
    getch();
}

void concatinate(char a[], char b[])
{
    system("cls");
    char *p1=a, *p2=b;
    while(*p1 != '\0')
        p1++;
    while(*p2 != '\0')
    {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';
    printf("Concatinated string is:%s\n", a);
    getch();
}

void lenth(char a[], char b[])
{
    system("cls");
    char *p1=a, *p2=b;
    int i=0,j=0;
    while(*p1 != '\0')
    {
        i++;
        p1++;
    }
    while(*p2 != '\0')
    {
        j++;
        p2++;
    }
    printf("Lenth of String 1 is:%d\n", i);
    printf("Lenth of String 2 is:%d\n", j);
    getch();
}

void str_input(char a[], char b[])
{
    system("cls");
    fflush(stdin);
    printf("Enter Str1:");
    gets(a);
    printf("Enter Str2:");
    gets(b);
}

void main()
{
    char string1[40], string2[40];
    int ch;
    str_input(string1, string2);
    while(1)
    {
        system("cls");
        printf("Enter your choice:\n=================\n1.Compare\n2.Concatinate\n3.Lenth\n4.Print Strings\n5.Re-Enter\n6.Exit\n\nYour Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: compare(string1, string2);
                    break;
            case 2: concatinate(string1, string2);
                    break;
            case 3: lenth(string1, string2);
                    break;
            case 4: printf("String 1:%s\n", string1);
                    printf("String 2:%s\n", string2);
                    getch();
                    break;
            case 5: str_input(string1, string2);
                    break;
            default:exit(0);
        }
    }
}

#include<stdio.h>
#include<stdlib.h>
#define subs 6

struct stu
{
    char name[30];
    int m[subs];
};

int main()
{
    struct stu s[60];
    int n, i, j, tot, avg;
    printf("Enter the number of students:");
    scanf("%d", &n);
    system("cls");
    printf("Enter the student details:\n\n");
    for(i=0; i<n; i++)
    {
        printf("Student %d -\nEnter the student name:", i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("Enter student marks:");
        for(j=0;j<subs;j++)
        {
            printf("\nSubject %d:", j+1);
            scanf("%d", &s[i].m[j]);
        }
    }
    system("cls");
    for(i=0;i<n;i++)
    {
        printf("For %s -\n", s[i].name);
        tot = 0;
        for(j=0;j<subs;j++)
            tot += s[i].m[j];
        avg = tot/subs;
        printf("Total Marks:%d\nAverage Marks:%d\n\n", tot, avg);
    }
    return 0;
}

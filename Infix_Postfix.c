#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char ch,stack[50],infix[50];
    int i,j,top=0;
    stack[0]='(';
    printf("\nEnter the infix exp:");
    gets(infix);
    fflush(stdin);
    j=strlen(infix);
    printf("\nThe Postfix Expression is:");
    for(i=0;i<j;i++)
    {
        ch=infix[i];
        if(((ch>='0')&&(ch<='9')) ||((ch>='a') && (ch<='z')) ||((ch>='A') &&(ch<='Z')))
        printf("%c",ch);
        if(ch=='^')
        {
            while(stack[top]=='^')
            printf("%c",stack[top--]);
            stack[++top]=ch;
        }
        if((ch=='*')||(ch=='/'))
        {
            while((stack[top]=='*')||(stack[top]=='/')||(stack[top]=='^'))
            printf("%c",stack[top--]);
            stack[++top]=ch;
        }
        if((ch=='+')||(ch=='-'))
        {
            while((stack[top]=='^')||(stack[top]=='*')||(stack[top]=='/')||(stack[top]=='+')||(stack[top]=='-'))
                printf("%c",stack[top--]);
            stack[++top]=ch;
        }
        if(ch=='(')
            stack[++top]=ch;
        if (ch==')')
        {
            while(stack[top]!='(')
            {
                printf("%c",stack[top--]);
                fflush(stdin);
            }
            top--;
        }
    }
    while(stack[top]!='(')
    printf("%c",stack[top--]);
    fflush(stdin);
    return 0;
}

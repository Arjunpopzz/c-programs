#include<stdlib.h>
#include<stdio.h>
int len(char *);
int main()
{
    int i;
    char s[100];
    printf("enter a string:\n");
    gets(s);
    i=len(s);
    printf("length of string is %d",i);
}
int len(char *a)
{
        int length=0;
        char *p=&a[0];
        while(*p!='\0')
        {
            length++;
            p++;

        }
        return length;
}
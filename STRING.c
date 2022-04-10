#include<stdio.h>
int main()
{
    char a[10]={'a','s','f','\0'};
    char *p=&a[0];
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
    return 0;
}
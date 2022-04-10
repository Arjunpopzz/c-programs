#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("enter the string\n");
    gets(a);
    printf("string length is :%d",strlen(a));
    return 0;   
}
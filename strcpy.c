#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],a[20];
    printf("enter a string to copy to the athor string:");
    gets(s);
    printf("the string after copying is:: %s",strcpy(a,s));
    return 0;
}
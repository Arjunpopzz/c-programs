#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="arjun o",a[20]="arjuno";
    int i=strcmp(s,a);
    if(i==0)
    {
        printf("equal returned:%d",i);
    }
    else
    printf("not equal returned:%d",i);
}    
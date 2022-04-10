#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[10],b[10],c; 
    int i=0;
    printf("enter the first string\n");
    scanf("%s",a);
    printf("enter character by character:");
    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        b[i]=c;
        i++;
    }
    b[i-1] = '\0';
    printf("the string is %s",b);

}
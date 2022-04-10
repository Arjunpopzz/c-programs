#include<stdio.h>
int main()
{
    int a[9];
    int *p = a;//int *p = &a[0];
    p+=2;
    if(p==&a[2])
    {
        printf("the values are matching\n");
    }else printf("not matching");
    printf("%u\n",p);
    printf("%u",&a[2]);
}
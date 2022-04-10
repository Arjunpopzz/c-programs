#include<stdio.h>
int main()
{
    int m[4];
    // int *p=&m[0];
    //OR
    int *p=m;//onother way to iniliaze a pointer ........
    for(int i=0;i<4;i++)
    {
    printf("enter the marks of %d student:\n",i+1);
    scanf("%d",p);
    p++;
    }
    for(int i=0;i<4;i++)
    printf("entered marks of %d student is %d\n",i+1,m[i]);
    return 0;
}
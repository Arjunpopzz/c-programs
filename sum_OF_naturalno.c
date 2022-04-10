#include<stdio.h>
int main()
{
    int n,sum=0,i=0;
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    int num=n;
    while(n>i)
    {
        sum+=n;
        n--;
    }
    printf("SUM OF %d NATURAL NUMBERS IS:\n%d",num,sum);
} 
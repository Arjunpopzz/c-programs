#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("ENTER THE NUMBER TO KNOW ITS FACTORIAL! ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("factorial is %d",fact);
}
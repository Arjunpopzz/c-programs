#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    printf("factorial of %d is %d ",n,factorial(n));
}
int factorial(int n)
{
    if(n==0 || n==1)
    {
       return 1;
    }
    return n * factorial(n-1);
    
}
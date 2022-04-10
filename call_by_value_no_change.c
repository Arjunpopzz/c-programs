#include<stdio.h>
void vrify(int);
int main()
{

    int n=5;
    printf("value before %d\n",n);
    vrify(n);       
    printf("after %d ",n);
    printf("NOOOOOO     CHANGE");
}
void vrify(int n)
{
    n*=10;
}
#include<stdio.h>

int sum(int *a,int *b)
{
    return *a+*b;
}
int avg(int *a,int *b)
{
    return (*a+*b)/2;
}

int main()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("sum = %d\n",sum(&a,&b));
    printf("Average = %d",avg(&a,&b));
    return 0;
}
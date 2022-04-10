#include<stdio.h>
#include<math.h>

int mul(int x ,int  y);
int power(int a ,int  b);

int main()
{
    int i,j;
    i=mul(3,4);
    j=power(2,6);
    printf("%d\n",i);
    printf("%d\n",j);

}

int mul(int x,int y)
{
    return x*y;
}
int power(int a,int b)
{
    return pow(a,b);
}
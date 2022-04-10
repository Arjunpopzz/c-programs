#include<stdio.h>
void swap(int *a,int *b);
void wrong_swap(int a,int b);

int main()
{
    int a=3,b=4;
    printf("before swap %d %d \n",a,b);
    wrong_swap(a,b);
    printf("after wrong swap %d %d \n",a,b);
    swap(&a,&b);
    printf("after right swap %d %d \n",a,b);

    return 0;

}
//the values will be swaped by thier address i.e call by reference..
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void wrong_swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

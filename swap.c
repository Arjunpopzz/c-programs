#include<stdio.h>
void swap(int *x,int *z);
int main()
{
    int a=10,b=20;
    printf("before swap a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("after swap a=%d and b=%d",a,b);
 return 0;

}

void swap(int *x,int *z)
{
    int t;
    t=*x;
    *x=*z;
    *z=t;
}

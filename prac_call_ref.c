#include<stdio.h>
void change(int *n)
{
    *n*=10;

}
int main()
{
    int n=3;
    printf("ThE value before%d\n",n);
    change(&n);
    printf("THe value after 10 times is %d",n);
}
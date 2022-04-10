#include<stdio.h>
int main()
{
    int i=23;
    int *k=&i;//it stores integer adress(i)
    int **j=&k;//it stores integer address(k)
    printf("THE VALUE OF i IS %d\n",i);
    printf("THE VALUE OF i IS %d\n",*k);
    printf("THE VALUE OF i IS %u\n",k);
    printf("THE VALUE OF i IS %d\n",&k);
    printf("THE VALUE OF i IS %d\n",*(&k));
    printf("THE VALUE OF i IS %d",**(&j));
}
#include<stdio.h>
int main()
{
    int i=34;
    int *p=&i;
    int **j=&p;
    //TEARED DOWN VERSION
    // int i=34;
    // int *p;
    // int **j;
    // p=&i;
    // j=&p;
    printf("the value of ptr to ptr is %u",**j);
    return 0;
}
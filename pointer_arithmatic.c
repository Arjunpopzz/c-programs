#include<stdio.h>
int main()
{
    int i=2;
    int *p=&i;
    printf("THE value of ptr is %u\n",p);
    p++;
    printf("the value after is %u\n",p);
    
    char w=2;
    char *q=&w;
    printf("THE value of ptr is %u\n",q);
    q+=1;
    printf("the value after is %u\n",q);
    if(p==q)
    {
        printf("equal");
    }
    printf("not equal");
    return 0;

}
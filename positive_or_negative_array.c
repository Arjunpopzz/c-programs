#include<stdio.h>
void count(int *a,int n)
{
    int pc=0,nc=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0) nc++;
        if(a[i]>0) pc++;
    }
    printf("count of positve integers:%d\n",pc);
    printf("count of negative integers:%d\n",nc);
}
int main()
{
    int a[100],n;
    printf("HOW MANY ELEMENTS:\n");
    scanf("%d",&n);
     for(int i=0;i<n;i++)
    {
        printf("enter the %d element:\n",i+1);
        scanf("%d",&a[i]);
    }
    count(a,n);
    return 0;
}    
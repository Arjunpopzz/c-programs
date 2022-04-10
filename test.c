#include<stdio.h>
void mul(int *a,int n);

int main()
{
    int a[3][10],n1,n2,n3;
    printf("enter 3 no for the multiplication table ::\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    for(int i=0;i<=3;i++)
    {
    mul(a[i],n1);
    mul(a[i],n2);
    mul(a[i],n3);
    break;

    }


}

void mul(int *a,int n)
{
    printf("table of %d is :\n",n);
    for(int i=0;i<10;i++)
    {
        a[i]=n*(i+1);

    }
    for(int i=0;i<10;i++)
    {
        printf("%d X %d = %d\n",n,i+1,a[i]);
    }
    printf("************************************************\n");
}
#include<stdio.h>
void mul(int *a,int num,int n)
{
    printf("multiplication table of %d is:::\n",num);
    for(int i=0;i<n;i++)
    {
        a[i]=num*(i+1);
    }
    for(int i=0;i<n;i++)
    printf("%d X %d = %d\n",num,i+1,a[i]);
    printf("*********************************\n\n");
}
int main()
{
    int a[3][10],n1,n2,n3;
    printf("enter the 3 numbers to display thier multplication table:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    mul(a[0],n1,10);
    mul(a[1],n2,10);
    mul(a[2],n3,10);

    return 0;
}
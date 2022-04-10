#include<stdio.h>
void swap(int *a,int n)
{
    for(int i=0;i<(n/2);i++)
    {
        int temp;
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
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
    swap(a,n);
    for(int i=0;i<n;i++)
    printf("after swapping %d element is %d\n",i+1,a[i]);
}
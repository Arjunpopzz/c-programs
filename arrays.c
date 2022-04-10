#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter no of elemets into the array: ");
    scanf("%d",&n);
    printf("ENTER\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("array elements are :\n");
    for(int j=0;j<n;j++)
    printf("%d\n",a[i]);
    return 0;
}
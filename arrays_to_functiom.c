#include<stdio.h>
void printarray(int *p,int n)
{
    for (int i=0;i<n;i++)
    printf("the value of %d element is %d\n",i+1,*(p+i));
}
void array(int p[],int n)
{
        for (int i=0;i<n;i++)
        {
               printf("\nthe value of %d element is %d\n",i+1,p[i]);

        }
     
        p[1]=34345;//the value will be changed because we are passing ori array 
}
int main()
{
    int a[]={2,3,4,5};
    printarray(a,4);
    array(a,4);
    printf("the value after changing :%d",a[1]);
    return 0;
}
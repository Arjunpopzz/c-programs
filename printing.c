#include<stdio.h>
int main()
{
    int a[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("enter the %d row %d element:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing the array:\n");
        for(int i=0;i<3;i++)
         {
            for(int j=0;j<4;j++)
            {
                printf(" %d row array elements is:\n {%d %d %d %d}  \n",i+1,a[i][j],a[i][j+1],a[i][j+2],a[i][j+3]);
                break;
            }
         }

}   
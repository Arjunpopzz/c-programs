#include<stdio.h>
int main()
{
    int a[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("PLEASE ENTER THE %d row %d coulum ELEMENT:\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the array elements are:\n" );
     for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("array %d row:",i+1);
           printf("{ %d %d %d %d }\n ",a[i][j],a[i][j+1],a[i][j+2],a[i][j+3]);
            break;           
        }
        printf("\n");
    }    
    return 0;
}


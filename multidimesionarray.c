#include<stdio.h>
int main()
{
    int students=3;
    int subjects=5;
    int marks[3][5];
    for(int i=0;i<students;i++)
    {
        for(int j=0;j<subjects;j++)
        {
            printf("enter the marks of %d student in %d subject\n",i+1,j+1);
            scanf("%d",&marks[i][j]);

        }
    }

    for(int i=0;i<students;i++)
    {
        for(int j=0;j<subjects;j++)
        {
            printf(" the marks %d student in %d subject is: %d\n",i+1,j+1,marks[i][j]);
        }
    }    
}
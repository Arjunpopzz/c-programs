#include<stdio.h>
int main()
{
    for(int i=1;i<6;i++)
    {
        for(int k=0;k<=2*i-1;k++)//odd pattern
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int cel,far;
    printf("ENTER THE CELCIUS TO CONVERT INTO FARENHIET");
    scanf("%d",&cel);
    far=(cel * 9/5)+32;
    printf("farenhiet is %d",far);
    return 0;
}
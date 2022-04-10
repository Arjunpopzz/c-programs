#include<stdio.h>
int celtofer(int cel);
int main()
{
    int cel;
    printf("ENTER THE CELCIUS\n");
    scanf("%d",&cel);
    printf("after converting to farenhiet is %d",celtofer(cel));

}
int celtofer(int cel)
{
    return ((cel*9/5)+32);
}
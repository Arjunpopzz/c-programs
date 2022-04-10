#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THE VALUES FOR THE THREE SIDES OF AN TRIANGLE\n");
    scanf("%d%d%d",&a,&b,&c);
    while(a!=0 && b!=0 && c!=0)
    {
        if (a>=10 || b>=10 || c>=10 )
        {
           printf("THE VALUE IS OUT OF RANGE,TRAINGLE CANNOT BE FORMED");
           break;
        }
        if(a==b && b==a && c==a)
        {
           printf("THE TRIANGLE IS EQUILATERAL:");
           break;
        }
        else if(a!=b && b!=a && c!=b)
         {
            printf("THE TRIANGLE IS SCALENE:");
            break;
         }
        else
        {
            printf("THE TRIANGLE IS ISOSCELES");
            break;
        }
   
    }
    if(a==0 || b==0 || c==0) 
        printf("SIDE OF A TRIANGLE CANNOT BE ZERO");
    

    return 0;
}
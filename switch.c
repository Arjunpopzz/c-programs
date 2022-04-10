// calculator using switch:::
#include<stdio.h>
#include<math.h>

int main()
{
    int n1,n2;
    char c;
    printf("ENTER THE OPERATION:\n");
    scanf("%c",&c);
    printf("ENTER THE TWO NUMBERS:\n ");
    scanf("%d\n%d",&n1,&n2);
    switch(c)
    {
        case '+' : printf("addition of %d and %d is %d",n1,n2,n1+n2);
                   break;
        case '/' : if(n1!=0)
                    {
                      printf("division of %d and %d is %d",n1,n2,n1/n2);
                      break;
                    }
                    else {printf( "cannot divide by 0");break;}
        case '*' : printf("multipilication of %d and %d is %d",n1,n2,n1*n2);
                    break;
        case '-' : printf("subtraction of %d and %d is %d",n1,n2,n1-n2);
                    break;  
        case '%'  : printf("reminder of %d of %d is %d",n1,n2,n1%n2);
                    break;   
        case '^' : printf(" %d to the power of  %d is %f",n1,n2,pow(n1,n2));
                    break;                                           
        default  : printf("INVALID");



    }
    return 0;
}

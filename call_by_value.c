#include<stdio.h>
int sum(int,int);
    int main()
{
    int a=3,b=5;
    printf("the values of a and b are %d and  %d\n",a,b);
    printf("the value after the function call is %d\n",sum(a,b));
 //The values cannot be changed because the copy of a and b will be sent to the function;    
 //IN order to do that we use pointers that is call by reference where we can change the values with the address
    printf("the value of a and b after function call is %d and %d \n    ",a,b);
    return 0;
}
int sum(int a, int b )
{
    int c;
    c=a+b;
    a=989;//assigning no impact on main()
    b=594;//assigning no impact on main()
    return c;
}
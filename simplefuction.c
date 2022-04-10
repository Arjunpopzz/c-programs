#include<stdio.h>
#include<stdlib.h>
void display();
int main()
{
    int n=100;
    printf("going to call the function\n");
    display(n);//fuction call
    printf("fuction is invoked successsfully!");
    

}
void display(int n)
    {
        printf("THE NO IS %d\n",n+10);
    }
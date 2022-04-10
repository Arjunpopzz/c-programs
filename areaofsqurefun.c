#include<stdio.h>
int area_of_square(int a);
int main()
{
    int i;
    printf("*****area of square *****\n");
    i=area_of_square(100);
    printf("THE SQUARE IS %d",i);

}
int area_of_square(int a)
{
    return a*a;
}
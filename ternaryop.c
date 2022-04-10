// IF CONDITIONAL IN ONE LINE
#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   printf("ENTER  A NUMBER ");
   scanf("%d",&n);
   (n<5) ? printf("%d is less than 5",n) : printf("%d is not less than 5",n);
}
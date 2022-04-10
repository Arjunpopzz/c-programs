#include<stdio.h>
 
int Fibonacci(int n);
 
int main()
{
   int n, i = 0, c;
   printf("ENTER THE NUMBER OF TERMS:\n");
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 || n==1)
   {
       return 1;
   }
    return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
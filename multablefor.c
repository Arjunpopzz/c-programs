#include<stdio.h>
int main()
{   
    int n; 
    printf("ENTER THE NUMBER FOR MULTI TABLE:\n");
    scanf("%d",&n);
    
          for(int k=1;k<=10;k++)
          {
              printf("%d * %d = %d\n",n,k,n * k);
          }
         
    
      return 0;
}
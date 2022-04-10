#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,guess,nguesses=1;
    srand(time(0));
    n = rand()%100+1;//to generate random no b/w 1 to 100
    // printf("THE RANDOM NUMBER IS\n%d\n",n);
  
    do
    {
        printf("GUESS THE NO BETWEEN  1 to 100\n");
        scanf("%d",&guess);
        if(n<guess)
        {
            printf("PLEASE CHOOSE LOWER NO\n");




        }
        else if(n>guess)
              {
                  printf("HIGHER NO PLEASE\n");
              }
              else{
                     printf("you guessed the no in %d attempts\n",nguesses);
                  }  
         nguesses++;
        
    } while(guess!=n);
      return 0;
}
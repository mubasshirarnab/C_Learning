#include<stdio.h>

int main()
{
   int i,X,T;
   int N=3;
   printf("Enter a Number which Player 1 picks: ");
   scanf("%d", &X);

   for(i=1; i<=N; i++){
     printf("\nEnter %dth try: ", i);
     scanf("%d", &T);

     if(T==X){
        printf("\nRight. Player 2 Wins.");
        break;
     }
     else{
        printf("\nWrong. %d chance(s) left.", N-i);
        if(N-i==0){
            printf("Player 1 Wins.");
        }
     }
   }

    return 0;
}

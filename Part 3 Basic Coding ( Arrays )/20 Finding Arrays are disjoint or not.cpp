#include <stdio.h>
#include <stdlib.h>
int disjoint(int arrayX[], int arrayY[], int K, int k){
  int a,A;
  for(a = 0;a<K;a++){
    for(A=0;A<k;A++){
     if(arrayX[a] == arrayY[A])
       return -1;
     }
   }
   return 1;
 }

  int main(){
     int k,K;
     //printf("First Array Size- ");
     scanf("%d",&K);
     int arrayX[K];
     int a;
     //printf("Elements- ");
     for(a=0;a<K;a++){
         scanf("%d",&arrayX[a]);
      }
      //printf("Second Array Size- ");
      scanf("%d",&k);
       int arrayY[k];
      // printf("Elements- ");
      for(a=0;a<k;a++){
         scanf("%d",&arrayY[a]);
       }
       int NEW = disjoint(arrayX,arrayY,K,k);
       if(NEW == -1)
           printf("The arrays are not disjoint\n");
       else
           printf("The arrays are disjoint\n");
  
       return 0;
 }
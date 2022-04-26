#include <stdio.h>
#include <stdbool.h>

bool isSubset(int arrayX[], int arrayY[], int a, int b)
{
   int x = 0;
   int y = 0;
   for (x = 0; x < b; x++)
   {
      for (y = 0; y < a; y++)
      {
         if (arrayY[x] == arrayX[y])
            break;
      }
      if (y == a)
         return 0;
   }

   return 1;
}

int main()
{
   int a, b;

   scanf("%d", &a);
   int arrayX[a];
   int x  ;
   scanf("%d", &b);
   int arrayY[b];
   int y;

   for (x = 0; x < a; x++)
   {
      scanf("%d", &arrayX[x]);
   }

   for (x = 0; x < b; x++)
   {
      scanf("%d", &arrayY[x]);
   }

   if (isSubset(arrayX, arrayY, a, b))
      printf("arrY is a subset of arrX\n ");
   else
      printf("arrY is NOT a subset of arrX\n");

   getchar();
   return 0;
}
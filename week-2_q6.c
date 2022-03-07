#include <stdio.h>
int main()
{
   int r, c, rows;
   printf("Enter the Number of rows for Hollow Square: ");
   scanf("%d", &rows);
   printf("\n");
   for (r=1; r<=rows; r++)
   {
      if (r==1 || r==rows)
      {
         for (c=1; c<=rows; c++){
            printf("*");
         }
      }
      else
      {
         for (c=1; c<=rows; c++)
         {
            if (c==1 || c==rows)
            {
               printf("*");
            }
            else{
               printf(" ");
            }
         }
      }
      printf("\n");
   }
   printf("\n");
}   
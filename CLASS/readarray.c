#include<stdio.h>

int main() {
   int i, arr[50], num;

   printf("\nEnter no of elements :");
   scanf("%d", &num);


   printf("\nEnter the values :");
   for (i = 0; i < num; i++)
   {
      scanf("%d", &arr[i]);
   }
   for (i = 0; i < num; i++) {
      printf("\narr[%d] = %d", i, arr[i]);
   }

   return (0);
}

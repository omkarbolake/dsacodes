#include <stdio.h>

int main()
{
  int Array[10], Position, i, Number, Value;

  printf("\nPlease Enter Number of elements in an array\n");
  scanf("%d", &Number);

  printf("\nPlease Enter %d elements of an Array \n", Number);
  for (i = 0; i < Number; i++)
   {
     scanf("%d", &Array[i]);
   }

  printf("\nPlease Enter the location of a Element you want to insert\n");
  scanf("%d", &Position);

  printf("\nPlease Enter the value of an Array Emenent to insert\n");
  scanf("%d", &Value);

  for (i = Number - 1; i >= Position - 1; i--)
   {
	     Array[i+1] = Array[i];
   }
  Array[Position-1] = Value;

 printf("\n Final Array after Inserting an  Elemnt is:\n");
 for (i = 0; i <= Number; i++)
  {
 	printf("%d\t", Array[i]);
  }

 return 0;
}

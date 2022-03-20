#include <stdio.h>
int main()
{
  int n, r = 0, temp;

  printf("Enter a number to check if it's a palindrome or not\n");
  scanf("%d", &n);

  temp = n;

  while (temp != 0)
  {
    r = r * 10;
    r = r + temp%10;
    temp = temp/10;
  }

  if (n == r)
    printf("%d is a palindrome number.\n", n);
  else
    printf("%d isn't a palindrome number.\n", n);

  return 0;
}

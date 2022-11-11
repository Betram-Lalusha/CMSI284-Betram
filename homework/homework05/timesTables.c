#include <stdio.h>
int main()
{
  int j, i, n;
  printf("Input number to display times tables up to \n");
  scanf("%d", &n);
  printf("Multiplication table from 2 to %d \n", n);
  for (i = 2; i <= n; i++)
  {
    for (j = 2; j <= n; j++)
    {
      printf("%d * %d = %d, ", j, i, i * j);
    }
    printf("\n");
  }
}
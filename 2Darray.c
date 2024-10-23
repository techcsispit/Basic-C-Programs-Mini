/*C program to input 2-D array of size 3*5.The
display the matrix*/

#include <stdio.h>
int main()
{
  int a[3][5];
  printf("Enter the elements:");
  for (int i = 0; i <= 2; i++)
  {
    for (int j= 0; j <= 4; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Elements are\n");
  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 4; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}

/* Bitwise operator
  a&b
  a|b
  a^b
Sample Input 0

5 4
Sample Output 0

2
3
3
*/
#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter the values of a and b");
  scanf("%d %d", &a, &b);

  printf("result of a&b is %d", (a&b));
  printf("result of a|b is %d", (a|b));
  printf("result of a^b is %d", (a^b));
}
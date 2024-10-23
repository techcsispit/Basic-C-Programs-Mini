//Modify the C program to find average of n numbers.

#include <stdio.h>
int main()
{
  int n;
  printf("Enter how many numbers are there");
  scanf("%d",&n);
  float arr[n],avg,sum;
  sum=0;
  int i;
  printf("Enter the numbers:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for ( i = 0; i < n; i++)
  {
    sum=sum+arr[i];
  }
  avg=sum/n;
  printf("Average is %f\n",avg);
  return 0;
}

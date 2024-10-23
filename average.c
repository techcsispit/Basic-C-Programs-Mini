//Modify the C program to find average of n numbers.

#include <stdio.h>
int main()
{
  int n;
  float a;
  double sum,avg;
  printf("Enter the number of input numbers:");
  scanf("%d",&n);
  printf("Enter that many numbers: ");
  for(int i=0;i<n;i++){
    scanf("%d",&a);
    sum += a; 
  }
  avg = sum/a;
  printf("Average of %d numbers=%lf",n,avg);
  return 0;
}

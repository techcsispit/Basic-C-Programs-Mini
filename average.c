// Modify the C program to find average of n numbers.

#include <stdio.h>

int main()
{
int n;
  printf("Enter the total number of values you want to calculate the average of:");
  scanf("%d",&n);

int user_arr[n];
printf("Enter %d numbers:",n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&user_arr[i]);
  }

int sum=0;
  for (int j = 0; j < n; j++)
  {
    sum += user_arr[j];
  }
  
float avg = sum/n;
printf("Average = %.2f",avg);

}